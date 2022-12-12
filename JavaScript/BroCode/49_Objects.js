// Object = a group of properties and methods.
//          Properties = what an object has.
//          Methods = what an object can do.
//          Use . to access properties/methods

const car = {
    model:"Mustang",
    colour:"red",
    year:2023,

    drive : function(){
        console.log("You drive the car");
    },
    brake : function(){
        console.log("You step on the brakes");
    }
}

console.log(car.model);

car.drive();
car.brake();