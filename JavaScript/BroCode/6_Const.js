// Const = a variable that can't be changed

const pi = 3.14159;
let radius;
let circumference;

radius = window.prompt("Enter the radius of a circle");
radius = Number(radius);

pi = 420.43; // will change it unless pi is a const

circumference = 2 * pi * radius;

console.log("The circumference is:", circumference);