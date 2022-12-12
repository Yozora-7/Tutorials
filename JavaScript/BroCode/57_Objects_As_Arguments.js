class Car{

    constructor(model, year, colour){
        this.model = model;
        this.year = year;
        this.colour = colour;
    }
}

const car1 = new Car("Mustang", 2023, "red");
const car2 = new Car("Corvette", 2024, "blue");
const car3 = new Car("Lambo", 2022, "yellow");

changeColour(car2, "gold");
displayInfo(car1);

function displayInfo(car){
    console.log(car.model);
    console.log(car.year);
    console.log(car.colour);
}

function changeColour(car, colour){
    car.colour = colour;
}