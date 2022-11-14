#include <iostream>

int myNum = 3; // global variables are declared to the top of the code

void printNum();

int main(){

    // local variable = declared inside a function or block {}
    // global variable = declared outside of all functions

    int myNum = 1; // myNum is a local variable to the main function.
                   // Therefore it cannot be accessed by another function

    printNum();
    std::cout << ::myNum << "\n"; // :: refers to the scope resolution operator. This will return the global version
                                  //    of myNum
    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << "\n";
}