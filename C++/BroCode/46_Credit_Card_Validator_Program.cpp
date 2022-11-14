#include <iostream>

/* Luhn Algorithm

1. Double every second digit from right to left. If doubled number is 2 digits, split them.
2. Add all signle digits from step 1.
3. Add all odd numbered digits from right to left.
4. Sum results from steps 2 and 3.
5. FI step 4 is divisible by 10, # is valid.

*/

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    	
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    }
    else{
        std::cout << cardNumber << " is not valid";
    }
    
    // 378282246310005 example no.

    return 0;
}
int getDigit(const int number){

    return number % 10 + (number / 10 % 10);

}
int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){ // the index i will begin from the second to last position
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}