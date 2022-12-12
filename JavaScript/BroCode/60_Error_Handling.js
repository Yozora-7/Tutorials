// Error = object with a description of
//         something went wrong

//         Can't open a file
//         Lose connection
//         User types incorrect input
//         TypeError

try{
    let x = window.prompt("Enter a #");
    x = Number(x);

    if(isNaN(x)) throw "That wasn't a number!"; // If not a number, throw the message.
    if(x == "") throw "That was empty!";

    console.log(`${x} is a number`);
}
catch(error){
    console.log(error);
}
finally{ // Finally will always execute
    console.log("This always executes");
}