#include <iostream>

// pass by value, creates copies of the variables, therefore different memory addresses
// pass by reference, references the memory address of the original variables, more efficient, should always be used

void swap(std::string &x, std::string &y); // when you pass through value, you create copies of x and y.
                                           // when the & sign is used, you pass memory addresses to where 
                                           // the original x and y variables are located, and then swapping the values
int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";

    return 0;
}
void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}