#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main(){

    // Object = a collection of attributes and methods. They can have characteristics and could perform actions.
    //          They can be used to mimic real world items and are created from a class, which acts as a blueprint.

    Human human1;

    human1.name = "Ronald";
    human1.occupation = "Policeman";
    human1.age = 63;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    human1.eat();

    return 0;
}