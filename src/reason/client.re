let rootEl = Js.createElement "div";
Js.appendChild Js.body rootEl;
let body = Js.getElementById "body";
Js.setHtml rootEl (
 "<button id=\"dec\">dec</button>" ^
 "  <span id=\"counter\">20</span> " ^
 "<button id=\"inc\">inc</button>"
);

let counterEl = Js.getElementById "counter";
let incButton = Js.getElementById "inc";
let decButton = Js.getElementById "dec";

let setCounter = fun text => Js.setHtml counterEl text;

let update = fun url => fun unit => {
  let p = Js.fetch ("/" ^ url);
  let p2 = Js.thenDo p (fun res => Js.responseToText res);
  let p3 = Js.thenDo p2 (setCounter);
  Js.catchError p3 (fun err => Js.log err);
  unit;
};

let onInc = update "inc";
let onDec = update "dec";

Js.addEventListener incButton "click" onInc;
Js.addEventListener decButton "click" onDec;

print_endline "Hello World from Reason";
