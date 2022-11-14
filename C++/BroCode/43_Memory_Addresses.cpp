#include <iostream>

int main(){

    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    std::string name = "Jay";
    int age = 21;
    bool student = true;

    std::cout << &name << "\n";

    return 0;
}