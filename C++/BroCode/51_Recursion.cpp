#include <iostream>

void walk(int steps);

int main(){

    // Recursion = a programming technique where a function invokes itself from within. It helps to break a
    //             complex concept into a repeatable single step.

    // Iterative vs Recursive

    // Advantages = less code and is cleaner. Useful for sorting and searching algorithms.

    // Disadvantages = Uses more memory. Slower.
    
    walk(100);

    return 0;
}

// Iterative approach
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
}

// Recursive approach. Usually code is easier to write and read. However uses more memory and takes up more
// processing time.
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}