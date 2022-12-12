
// Var scope = where a vaiable is accessible

// let = variables are limited to a block scope {}
// var = variables are limited to a function(){}


// global variable = is declared outside any function

for(let i = 1; i <= 3; i += 1){
    console.log(i); // let variables can only be accessed from inside here
}

console.log(i) // a let variable cannot be accessed here, but var can

var name = "Jay";