#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    std::cout << "What's your name?: ";
    // std::cin >> name; // store the input of above to a variable called "name"

    std::getline(std::cin >> std::ws, name); // allows the user to input a string with spaces, as well as elminate whitespace from above inputs

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old.";

    return 0;
}