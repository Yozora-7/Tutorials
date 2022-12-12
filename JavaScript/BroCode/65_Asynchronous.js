// Synchronous code = In an ordered sequence.
//                    Step-by-step linear instructions
//                    (start now, finish now)

// Asynchronous code = Out of sequence.
//                     Eg. Accessing a database
//                         Fetch a file
//                         Tasks that take time
//                     (start now, finish sometime later)

console.log("START");
console.log("This step is synchronous");
console.log("END");

console.log("START");
setTimeout(() => console.log("This is asynchronous"), 5000);
console.log("END");