#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }        
};

int main(){

    // Constructor = special method that is automatically called when an object is instantiated. Useful for assigning
    //               values to attributes as arguments.

    Student student1("Bob", 20, 2.5);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    return 0;
}