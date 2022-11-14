#include <iostream> 

void square(double length);
double cube(double length);

int main(){

    // return a value back to the spot when the encompassing function was called

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << area << "cm^3\n";

    return 0;
}
double square(double length){
    double result = length * length;
    return result; // when returning a variable, the void should be changed to the data type of the variable
} 

double cube(double length){
    return length * length * length;
}