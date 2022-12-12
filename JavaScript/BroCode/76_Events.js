
const element = document.getElementById("myButton");
element.onclick = doSomething;
const element = document.getElementById("myText");
const element = document.getElementById("myDiv");

const element1 = document.body;
element1.onload = doSomething();
element.onchange = doSomething();
element.onmouseover = doSomething;
element.onmouseout = doSomethingElse;
element.onmousedown = doSomething;
element.onmouseup = doSomethingElse;

function doSomething(){
    alert("You did something");
    element.style.backgroundColor = "red";
}

function doSomethingElse(){
  //alert("You did something");
    element.style.backgroundColor = "lightgreen";
}