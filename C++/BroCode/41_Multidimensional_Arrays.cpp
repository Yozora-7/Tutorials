#include <iostream>

int main(){

    std::string cars[3][4] = {{"Mustang", "Escape", "F-150"},
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger", "Durango", "Ram 1500"}};
                            // two-dimensional arrays require 2 sets of square brackets
                            // the first set of brackets refer to the no. of rows, while the second
                            //     refers to the no. of columns

    std::cout << cars[0][0] << " ";

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
    }   std::cout << "\n";

    return 0;
}