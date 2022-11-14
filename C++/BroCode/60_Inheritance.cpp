#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal{ // Dog will inherit from the Animal class.
    public:

    void bark(){
        std::cout << "The dog barks\n";
    }
};
class Cat : public Animal{
    public:

    void meow(){
        std::cout << "This cat meows\n";
    }
}

int main(){

    // Inheritance = A class can receive attrivutes and methods from another class. Children classes inherit from
    //               a parent class. This helps to reuse similar code found within multiple classes. 

    Dog dog;
    Cat cat;

    std::cout << dog.alive << "\n";
    std::cout << cat.alive << "\n";
    dog.eat();
    dog.bark();
    cat.meow();

    return 0;
}