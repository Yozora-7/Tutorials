
let element = document.body;
let child = element.firstElementChild;
child.style.backgroundColor = "lightgreen";

let element1 = document.querySelector("#vegetables");
let parent = element.parentElement;
parent.style.backgroundColor = "lightgreen"; // the parent here is the body itself

let element2 = document.querySelector("#vegetables");
let sibling = element.nextSibling;
sibling.style.backgroundColor = "lightgreen";

let element3 = document.querySelector("#fruit");
let child = element.children[1];
child.style.backgroundColor = "lightgreen";

let element4 = document.querySelector("#fruit");
let children = Array.from(element.children);

children.forEach(child => child.style.backgroundColor = "lightgreen");