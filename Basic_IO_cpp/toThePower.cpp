#include <iostream>
#include <cmath>

int main(){
    int base, exponent;
    
    std::cout << "Enter base:";
    std::cin >> base;

    std::cout << "Enter Exponent:";
    std::cin >> exponent;

    long int result = std::pow(base, exponent);
    std::cout << base << " to the power of " << exponent << " is " << result << std::endl;

    return 0;
}