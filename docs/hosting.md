# Hosting

Target: <https://games.nostalgiarealm.com/maisysplayhouse/> (the host name has no `www.` record).

The site is static. The game runs in the visitor's browser; the server only hands out files.

## What the server must do

- Serve `data/data2.mxx` with **byte ranges** (HTTP 206). The game reads it in pieces.
- `application/wasm` for `game/maisy.wasm`.
- Keep gzip off `application/octet-stream` (the data files).
- HTTPS.
- Preferably send `Cross-Origin-Opener-Policy: same-origin` and `Cross-Origin-Embedder-Policy: require-corp`. Without them the page installs `coi-sw.js`, a service worker that adds them, and reloads once. Both ways were tried locally (`tools/serve.mjs` with and without `--no-coi`).

## First publication (needs root on the server once)

```bash
MAISY_DEPLOY_PATH=/home/rick/maisy-upload/maisysplayhouse MAISY_DEPLOY_URL= tools/deploy-website.sh
```

```bash
scp tools/server-setup-website.sh Debian:maisy-upload/
```

```bash
ssh -t Debian 'sudo bash /home/rick/maisy-upload/server-setup-website.sh --from /home/rick/maisy-upload/maisysplayhouse'
```

`tools/server-setup-website.sh` creates `/var/www/games.nostalgiarealm.com/maisysplayhouse` (owned by `rick`), moves the staged build into it and adds the `/maisysplayhouse/` locations (with the isolation headers) to `/etc/nginx/sites-available/games.nostalgiarealm.com`, with a backup; if `nginx -t` refuses the result it restores the backup and does not reload.

## Updates

```bash
tools/deploy-website.sh --dry-run
```

```bash
tools/deploy-website.sh
```

It builds `dist/`, mirrors it with rsync (about 300 MB the first time) and compares the live `index.html`, `src/web/main.js`, `game/maisy.wasm` and `data/data.mfx` with the build, then checks that a range request on `data2.mxx` answers 206.

## Status

Not published yet as of 2026-11-11: the SSH agent on the workstation refused to sign for `Debian` ("agent refused operation"), so nothing was uploaded. See `PLAN.md`.

The site distributes the original disc's data file. Whether that may be published is the owner's decision.
