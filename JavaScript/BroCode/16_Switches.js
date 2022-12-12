
// Switch = statement that examines a value for a match
//          against many case clauses. More efficient than many
//          "else if" statements.

let grade = "A";

switch(grade){
    case "A": 
        console.log("Great work");
        break;
    case "B":
        console.log("Decent work");
        break;
    case "C":
        console.log("It's alright");
        break;
    case "D":
        console.log("Not good");
        break;
    case "F":
        console.log("Terrible.");
        break;
    default:
        console.log(grade, "is not a letter grade");
}