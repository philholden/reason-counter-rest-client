type promiseT 'a;

type responseT;

type errorT;

type element;

external fetch : string => promiseT responseT = "fetch" [@@bs.val];

external thenDo : promiseT 'a => ('a => 'b [@bs]) => promiseT 'b = "then" [@@bs.send];

external catchError : promiseT 'a => (errorT => unit [@bs]) => promiseT 'a = "catch" [@@bs.send];

external responseToText : responseT => string = "text" [@@bs.send];

external log : 'a => unit = "console.log" [@@bs.val];

external body : element = "document.body" [@@bs.val];

external createElement : string => element = "document.createElement" [@@bs.val];

external getElementById : string => element = "document.getElementById" [@@bs.val];

external querySelector : string => element = "document.querySelector" [@@bs.val];

external setHtml : element => string => unit = "innerHTML" [@@bs.set];

external appendChild : element => element => unit = "appendChild" [@@bs.send];

external addEventListener :
  element => string => (unit => unit) => unit = "addEventListener" [@@bs.send];
