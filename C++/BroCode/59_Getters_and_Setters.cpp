#include <iostream>

class Stove{
    private: // Private ensures that there is no longer access to the temperature variable from outside the class.
        int temperature = 0;
    public:
    Stove(int temperature){
        setTemperature(temperature);
    }
    int getTemperature(){ // Adding a getter will make an attribute readable. If you need a private attribute to also
        return temperature; // be writeable, you can add a setter.
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main(){

    // Abstraction = hiding unnecessary data from outside a class
    // Getter = function that makes a private attribute READABLE
    // Setter = function that makes a private attribute WRITEABLE

    Stove stove(0);

    // stove.temperature = 10000000

    stove.setTemperature(15);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}