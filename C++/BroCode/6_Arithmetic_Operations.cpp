#include <iostream>

int main() {

    int students = 20;
    double students = 25;
    // students += 1;
    students ++; // Means the same, students = students + 1
    students -=1;
    students --; // Only subtracts one from a variable

    students *= 2;
    students /= 2;

    std::cout << students; // Displays 21

    return 0;
}