#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a: variable, data type, class, object, etc.

    std::string name = "Hi";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";

    return 0;
}