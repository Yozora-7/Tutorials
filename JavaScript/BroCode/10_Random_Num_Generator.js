let x;
let y;
let z;

document.getElementById("rollButton").onclick = function(){
    let x = Math.floor(Math.random() * 6 + 1); // Random number between 1 and 6
    let y = Math.floor(Math.random() * 6 + 1);
    let z = Math.floor(Math.random() * 6 + 1);

    document.getElementById("xlabel").innerHTML = x;
    document.getElementById("ylabel").innerHTML = y;
    document.getElementById("zlabel").innerHTML = z;
}
