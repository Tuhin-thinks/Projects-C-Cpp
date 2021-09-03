/**
 * @file gcd.cpp
 * @brief Program to find the GCD between 2 number using recursion
 * @version 0.1
 * @date 2021-09-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int gcd(int a, int b){
    if (b == 0)
        return a;
    if (a == 0)
        return b;


    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}

int main(){

    int num1 = 10;
    int num2 = 15;

    std::cout << "num1 = ";
    std::cin >> num1;

    std::cout << "num2 = ";
    std::cin >> num2;


    std::cout << "GCD of " << num1 << " and " << num2 << " = " << gcd(num1, num2) << std::endl;

    return 0;
}