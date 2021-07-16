#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string s="Geeks for Geeks";  // need to print each word in a separate line

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << '\n';
    }
    return 0;
}