/**
 * @file if_cpp.cpp
 * @author your name (you@domain.com)
 * @brief Program to demonstrate simple decision making in C++
 * @version 0.1
 * @date 2021-07-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    
    cout << "What's your age?" << "\n";
    cin >> age;

    
    if (age < 13)
        cout << "You are a kid";
    else if(age < 20)
        cout << "You are a teenager";
    else if (age < 25)
        cout << "You are a grown-up now";
    else if (age < 45)
        cout << "You are a middle-aged person";
    else if (age < 100)
        cout << "you are a senior person now";
    else
        cout << "Either you are super old, or you're faking it!";
    

    cout << endl;

    return 0;
}