#include <iostream>

int main(){

    // break = break out of loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 10){
            break; // break stops the loop to show numbers from 1-9, while continue would remove 10 from the iterations
        }
        std::cout << i << "\n";
    }

    return 0;
}