class Car{

    constructor(model, year, colour){
        this.model = model;
        this.year = year;
        this.colour = colour;
    }

    drive(){
        console.log(`You drive the ${this.model}`);
    }
}

const car1 = new Car("Mustang", 2023, "red");
const car2 = new Car("Corvette", 2024, "blue");
const car3 = new Car("Lambo", 2022, "yellow");

const cars = [car1, car2, car3];

console.log(cars[0].model);

cars[1].drive();

startRace(cars);

function startRace(cars){
    for(const car of cars){
        car.drive();
    }
}