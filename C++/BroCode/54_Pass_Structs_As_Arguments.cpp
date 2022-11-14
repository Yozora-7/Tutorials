#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string colour;
};

void printCar(Car &car);
void paintCar(Car &car, std::string colour);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.colour = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.colour = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    std::cout << &car1 << "\n";
    printCar(car1);

    return 0;
}
void printCar(Car &car){
    std::cout << &car << "\n";
    std::cout << car.year << "\n";
    std::cout << car.colour << "\n";
}
void paintCar(Car &car, std::string colour){
    car.colour = colour;
}