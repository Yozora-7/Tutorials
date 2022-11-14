#include <iostream>

template <typename T, typename U> // This will allow us to work with more than 1 single data type.
auto max(T x, U y){ // The auto keyword should allow the compiler to deduce what the return type should be
    return(x > y) ? x : y;
}

int main(){

    // Function template = describes what a function looks like. Can be used to generate as many overloaded functions
    //                     as needed, each using different data types.

    std::cout << max(1, 2.1) << "\n";

    return 0;
}