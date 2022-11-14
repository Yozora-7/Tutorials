#include <iostream>

int main(){

    std::string car[4] = {"Range Rover", "Ford", "Ferrari"}; // square brackets here allow for the user to set an array size

    car[1] = "Lamborghini";

    std::cout << car[0] << "\n";
    std::cout << car[1] << "\n";
    std::cout << car[2] << "\n";

    return 0;
}