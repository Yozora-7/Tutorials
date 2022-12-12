let username = "Jay";
let phonenumber = "04994 394 520";

console.log(username.length);
console.log(username.charAt(0)); // Char at index of 0
console.log(username.indexOf("J"));
console.log(username.lastIndexOf("a"));
username = username.trim() //Removes empty spaces
username = username.toUpperCase();
username = username.toLowerCase();

phonenumber = phonenumber.replaceAll("4", "3");