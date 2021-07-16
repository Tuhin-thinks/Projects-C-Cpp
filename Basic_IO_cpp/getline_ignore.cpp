#include <iostream>

using namespace std;

int main(){
    string a, d;
    int b;

    getline(cin, a);
    cin >> b;
    
    cin.ignore();  // cin does not remove the trailing new lines after user press the "Enter", using cin.ignore to ignore the remaining characters.
    getline(cin, d);
    
    
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << d << endl;

    
    return 0;
}