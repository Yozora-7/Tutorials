
// DOM = Document Object Model (API)
//       An interface for changing the content of a page

console.log(document); // would display the dom itself
console.dir(document); // would display the DOM's properties

console.log(document.title); 
console.log(document.URL);

document.title = "TITLE";
document.location = "http://www.google.com";

document.body.style.backgroundColor = "skyblue";
document.getElementById("myDiv").innerHTML = "Hello";