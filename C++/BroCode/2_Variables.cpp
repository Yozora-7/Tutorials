#include <iostream>

int main() {
    
    int x; // declaration
    x = 5; // assignment

    int y = 6;
    int sum = x + y;

    std::cout << x;
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // int data type can only store a whole number
    int age = 21;
    int year = 2023;

    // double (number incl. decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    // boolean (true, false)
    bool student = false;
    bool power = true;

    // string
    std::string name = "Jay";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are" << age << "years old";


    

    return 0;

}