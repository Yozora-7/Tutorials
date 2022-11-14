#include <iostream>

int main(){

    // pointer = variable that stores a memory address of another variable. Sometimes it's easier to work with an
    //           address.

    // & address-of operator
    // * dereference operator

    std::string name = "Jay";
    int age = 18;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"}; // when determining a pointer for
    // an array, it doesn't require the & operator because it already is a memory address

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << "\n";
    std::cout << *pAge << "\n";
    std::cout << pFreePizzas << "\n";

    return 0;
}