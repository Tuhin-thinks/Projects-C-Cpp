/**
 * @file mul_odd_nos.cpp
 * @brief Multiply odd numbers in a given range
 * @version 0.1
 * @date 2021-09-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

long int multiply(int start, int stop, long int value){
    // std::cout << "start:" << start << " stop:" << stop << " value:" << value << std::endl;
    if (start >= stop)
        return value;
    
    if (start % 2 == 0)  // check if the number is odd
        start += 1;  // if number is NOT odd, choose the next number (odd)
    
    value *= start;
    start += 2;
    return multiply(start, stop, value);
}

int main(){
    
    int start, stop;

    start = 5;
    stop = 15;

    long int result = multiply(start, stop, 1);

    std::cout << "Multiplication of all odd numbers between " << start << " and " << stop << " is " << result << std::endl;
    
    return 0;
}