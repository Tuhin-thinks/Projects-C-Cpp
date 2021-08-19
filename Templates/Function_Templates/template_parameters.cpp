#include <iostream>
#include <string>
#include "max_modified.hpp"

int main(){

    int a=10;
    double b = 10.9;

    std::cout << "\nSpecifying return type as <double>\n";
    std::cout << "Preset Values: a=" << a << ", b=" << b << std::endl;
    std::cout << "Max of a and b: " << ::max<double>(a, b) << std::endl;  // specifying return type (RT) as double

    // same process but, RT as int (explicitly mentioned)
    std::cout << "\nSpecifying return type as <int>\n";
    std::cout << "Preset Values: a=" << a << ", b=" << b << std::endl;
    std::cout << "Max of a and b: " << ::max<int>(a, b) << std::endl;  // specifying return type (RT) as double

    return 0;
}