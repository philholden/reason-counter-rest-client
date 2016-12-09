# reason-counter-rest-client

* Minimal Rest client example in Reason
* Counter express server with `/inc'` & `/dec` end points.
* Reason binds to fetch, promise, basic DOM manipulation & events to update counter on button click

---

Based on: [reason-web-starterkit](https://github.com/vramana/reason-web-starterkit)

Start writing your web applications using reason+bucklescript

Note: This **doesn't** use [rebel](https://github.com/reasonml/rebel) directly. This repo uses prebuilt rebel binaries hosted at https://github.com/vramana/rebel-bin. This cuts down the amount of installation time by quite a bit.

### Usage

1. Git clone the repo
2. Run `npm run install:sh`
3. Run `npm run server` and `npm run rebel` in two different terminals
4. Open http://localhost:3000
5. Run `EDITOR=atom npm run editor` to see type errors and tooling in Nuclide (may need atom-reason-loader package)
