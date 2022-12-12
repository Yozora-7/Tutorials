// Change the datatype of a value to another

let age = window.prompt("How old are you?");

console.log(typeof age);
age = Number(age);

age += 1;

console.log("Happy birthday! You are", age, "years old");


let x;
let y;
let z;

x = Number("3.14");
y = String(3.14)
z = Boolean(""); // If the variable is empty it will return false, otherwise true.

console.log(x, typeof x);
console.log(y, typeof y);
console.log(z, typeof z);