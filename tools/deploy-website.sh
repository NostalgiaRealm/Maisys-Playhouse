#!/usr/bin/env bash
# Publish the browser version to the Nginx webserver.
#
#   tools/deploy-website.sh            build, upload and verify
#   tools/deploy-website.sh --dry-run  build and show what would change on the server
#
# Settings, from the environment:
#   MAISY_DEPLOY_HOST  SSH target (default Debian)
#   MAISY_DEPLOY_PATH  web folder on the server, must end in /maisysplayhouse
#   MAISY_DEPLOY_URL   public address checked after the upload ("" skips the check)
#
# The upload mirrors dist/ with rsync over SSH (about 300 MB the first time: data2.mxx).
# First publication also needs tools/server-setup-website.sh once, as root on the server: docs/hosting.md.
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
host="${MAISY_DEPLOY_HOST:-Debian}"
dest="${MAISY_DEPLOY_PATH:-/var/www/games.nostalgiarealm.com/maisysplayhouse}"
url="${MAISY_DEPLOY_URL-https://games.nostalgiarealm.com/maisysplayhouse/}"
dry=
case "${1:-}" in
  -n|--dry-run) dry=--dry-run ;;
  "") ;;
  *) echo "Usage: $0 [--dry-run]" >&2; exit 2 ;;
esac

dest="${dest%/}"
case "$dest" in
  /*/maisysplayhouse) ;;
  *) echo "Refusing to deploy to '$dest': expected an absolute path ending in /maisysplayhouse" >&2; exit 1 ;;
esac

cd "$root"
echo "== Building the website in dist/"
node tools/build.mjs --link
for file in index.html coi-sw.js src/web/main.js src/web/worker.js src/host/runtime.js game/maisy.wasm game/maisy.meta.json game/maisy.codemap.bin game/files.json data/data.mfx data/data2.mxx; do
  [ -s "dist/$file" ] || { echo "Build incomplete: dist/$file is missing" >&2; exit 1; }
done
du -shL dist | cut -f1 | sed 's/^/   size: /'

echo "== Uploading to $host:$dest/${dry:+ (dry run)}"
if [ -n "$dry" ]; then report=(--dry-run --itemize-changes --info=stats1)
else report=(--info=progress2,stats1); fi
# -L: dist/data/data2.mxx is a link to the extracted original; upload the file itself.
rsync -azL --checksum --no-owner --no-group --delete-delay --delay-updates --chmod=D755,F644 --mkpath --skip-compress=mxx "${report[@]}" dist/ "$host:$dest/"

if [ -n "$dry" ] || [ -z "$url" ]; then exit 0; fi
echo "== Checking $url"
failed=
for file in index.html src/web/main.js game/maisy.wasm data/data.mfx; do
  want=$(sha256sum < "dist/$file" | cut -d' ' -f1)
  live=$(curl -fsSL --max-time 180 -H 'Cache-Control: no-cache' "${url%/}/$file" | sha256sum | cut -d' ' -f1) || live=unreachable
  if [ "$live" = "$want" ]; then echo "   $file: live copy matches"
  else echo "   Warning: the live $file differs from the upload ($live)" >&2; failed=1; fi
done
# the big data file is read in byte ranges: the server must answer 206
code=$(curl -s -o /dev/null -w '%{http_code}' --max-time 60 -r 1000000-1000099 "${url%/}/data/data2.mxx") || code=000
if [ "$code" = 206 ]; then echo "   data2.mxx: byte ranges work"; else echo "   Warning: range request on data2.mxx returned $code" >&2; failed=1; fi
[ -z "$failed" ] || exit 1
echo "   The live site serves the new build."
