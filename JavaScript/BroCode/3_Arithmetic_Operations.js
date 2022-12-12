let students = 30;

students += 1;
students -= 1;
students /= 2;
students *= 2;

let extraStudents = students % 2;

console.log(extraStudents);

/* Operator precedence

    1. Brackets
    2. Indicies
    3. Multiplication + division
    4. Addition and subtraction
*/

let result = 1 + 2 * (3 + 4);

console.log(result) // Answer should be 15