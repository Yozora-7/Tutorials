#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled; // Within members you can set a default value too.
};

int main(){

    // Struct = a structure that groups related variables under one name. Structs can contain many different data
    //          types. Variables in a struct are known as "members".
    //          Each member can be accessed with . "Class Member Access Operator".

    student student1;
    student1.name = "Dave";
    student1.gpa = 1.5;
    student1.enrolled = false;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    return 0;
}