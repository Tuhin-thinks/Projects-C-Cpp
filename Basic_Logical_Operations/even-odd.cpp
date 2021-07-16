#include <iostream>

using namespace std;

// Given 2 integers to print, even number first and odd number next
int main(){
    int first, second, a, b;

    cin >> a >> b;
    first = a;
    second = b;

    if (b%2 == 0)
        swap(first, second);
    
    cout << first << " " << second << endl;

    return 0;
}