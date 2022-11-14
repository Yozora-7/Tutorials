#include <iostream>

void happyBirthday(std::string name, int age); // you can declare a function before actually determining what it is

int main(){

    std::string name = "Jay";
    int age = 18;

    happyBirthday(name, age); // call the function

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to "<< name << "\n";
    std::cout << "Happy Birthday to "<< name << "\n";
    std::cout << "Happy Birthday to "<< name << "\n";
    std::cout << "You are " << age << " years old!" << "\n";
}