// Arrow function = compact alternative to a traditional function expression
//     =>

const greeting = (userName) => {console.log(`Hello ${userName}`);}

greeting("Jay");

const percent = (x, y) => {return x / y * 100;}

console.log(`${percent(37, 50)}%`);

let grades = [100, 50, 90, 60, 80, 70];

grades.sort((x, y) => {y - x});

grades.forEach((element) => {console.log(element)});


