
// The slice() method extracts a section of a string and returns
// it as a new string, without modifying the original string.

let fullname = "Robert Smith";
let firsname;
let lastname;

firstname = fullname.slice(0, 5)
lastname = fullname.slice(6); // Argument refers to the index.

lastname = fullname.slice(fullname.indexOf(" " + 1)) // Everything after the first space will be sliced and created into a new string

