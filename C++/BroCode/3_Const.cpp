#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    // tells the complier to prevent anything from modifying it (read-only)

    const double PI =  3.14159; // if it were just double pi then someone could change it
 // double pi = 4.20493 const prevents the variable from being changed. A common naming convention for
 // constants is to make the variable uppercase.
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}