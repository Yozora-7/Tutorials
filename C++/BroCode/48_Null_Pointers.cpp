#include <iostream>

int main(){

    // Null value = a special value that means something has no value. When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer).

    // nullptr = keyword that represents a null pointer literal

    // nullptrs are helpful when determining if an address was successfully assigned to a pointer.

    // When using pointers, one should be careful that their code isn't dereferencing nullptr, or pointing to free
    // memory. This will cause undefined behaviour.

    int *pointer = nullptr;
    int x = 123;

    *pointer;

    if(pointer == nullptr){  // to check if a pointer is null
        std::cout << "address was not assigned\n";
    }
    else{
        std::cout << "address was assigned\n";
    }
    return 0;
}