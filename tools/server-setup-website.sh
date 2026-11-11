#!/usr/bin/env bash
# One-time setup of /maisysplayhouse/ on the Nginx server. Run as root on the server; safe to run again.
#
#   sudo bash server-setup-website.sh [--from DIR]
#
# 1. Creates the web folder, owned by the upload account, and moves a staged build into it.
# 2. Adds the /maisysplayhouse/ locations to the games site, with a backup, and rolls back if nginx -t fails.
#
# It changes nothing for the other games.
set -euo pipefail

site=/etc/nginx/sites-available/games.nostalgiarealm.com
web=/var/www/games.nostalgiarealm.com/maisysplayhouse
owner=rick
bare=games.nostalgiarealm.com
from=
while [ $# -gt 0 ]; do
  case "$1" in
    --from) from="$2"; shift 2 ;;
    *) echo "Usage: $0 [--from DIR]" >&2; exit 2 ;;
  esac
done
[ "$(id -u)" = 0 ] || { echo "Run this as root (sudo)." >&2; exit 1; }
[ -f "$site" ] || { echo "Missing $site" >&2; exit 1; }

echo "== Web folder $web"
install -d -o "$owner" -g www-data -m 755 "$web"
if [ -n "$from" ]; then
  [ -s "$from/index.html" ] || { echo "No build in $from" >&2; exit 1; }
  rsync -a --delete --chown="$owner:www-data" --chmod=D755,F644 "$from/" "$web/"
  rm -rf -- "$from"
fi
[ -s "$web/index.html" ] && echo "   build in place: $(du -sh "$web" | cut -f1)"

if grep -q 'location /maisysplayhouse/' "$site"; then
  echo "== /maisysplayhouse/ is already in the site"
else
  backup="$site.bak-$(date +%F-%H%M%S)-maisysplayhouse"
  cp -a "$site" "$backup"
  echo "== Adding /maisysplayhouse/ to the site (backup: $backup)"
  python3 -I - "$site" <<'PY'
import sys
path = sys.argv[1]
s = open(path).read()
snippet = '''    # Maisy's Playhouse (1999).
    location = /maisysplayhouse {
        return 301 /maisysplayhouse/$is_args$args;
    }

    location ~ ^/maisysplayhouse/(?:\\.|.*/\\.) {
        return 404;
    }

    location /maisysplayhouse/ {
        # add_header here replaces the server-level one, so the site's revalidation rule is repeated.
        add_header Cache-Control "no-cache" always;
        # The game thread needs SharedArrayBuffer: the page must be cross-origin isolated.
        add_header Cross-Origin-Opener-Policy same-origin always;
        add_header Cross-Origin-Embedder-Policy require-corp always;
        add_header Cross-Origin-Resource-Policy same-origin always;
        # Text and the wasm shrink a lot. data2.mxx (application/octet-stream) stays out of this:
        # the game reads it by byte ranges.
        gzip on;
        gzip_vary on;
        gzip_comp_level 5;
        gzip_min_length 1024;
        gzip_types application/json application/javascript text/javascript text/css application/wasm;
        root /var/www/games.nostalgiarealm.com;
        index index.html;
        autoindex off;
        try_files $uri $uri/ =404;
    }

'''
# insert in front of the first location block of an existing game
for marker in ('    # A2 Racer 4.\n', '    location = /a2racer4 {\n', '    # Static Kao website.\n'):
    if s.count(marker) == 1:
        s = s.replace(marker, snippet + marker)
        break
else:
    sys.exit('Insertion point not found in ' + path)
open(path, 'w').write(s)
PY
  if nginx -t; then
    systemctl reload nginx
  else
    echo "nginx -t failed: restoring $backup" >&2
    cp -a "$backup" "$site"
    exit 1
  fi
fi

echo "== Done: https://$bare/maisysplayhouse/"
