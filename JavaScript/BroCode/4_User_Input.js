// Window prompt method

let username1 = window.prompt("What's your name?");
console.log(username);

// Textbox method (index.html)

let username;

document.getElementById("myButton").onclick = function(){
    username = document.getElementById("myText").value; // The ID of the text box
    console.log(username);
    document.getElementById("myLabel").innerHTML = "Hello " + username;
}