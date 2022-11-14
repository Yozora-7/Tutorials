#include <iostream>

int main(){
    
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters! ";
    }
    else{
        std::cout << "Welcome " << name;
    }

    if(name.empty()){
        std::cout << "You didn't enter your name";
    }

    // name.clear(); clears the input

    name.append("@gmail.com");

    std::cout << "Your username is now " << name;
    std::cout << name.at(0); // display the first letter of the string

    name.insert(0, "@"); // index position, with what you want it to be replaced with
    std::cout << name;

    name.erase(0, 3) //erase the characters starting from the first to the third

    std::cout << name.find('a'); // find which index position the letter 'a' is at

    return 0;
}