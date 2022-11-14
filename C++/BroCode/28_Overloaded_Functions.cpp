#include <iostream>

// functions can share the same name, but you need a different set of parameters
// a function's name + its' parameters is known as a functions signature. Each functions signature needs to be unique.

void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("pepperoni", "mushrooms");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}