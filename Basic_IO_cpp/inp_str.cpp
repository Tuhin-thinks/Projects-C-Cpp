#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string name;

    cout << "Hey what's your name?\n" ;
    cin >> name;  // cin by default ignores any string after " " (space), but as we want the name, so we don't care about the rest of the part

    string rev_name = name;
    reverse(rev_name.begin(), rev_name.end());

    if (name.compare(rev_name) == 0){
        cout << "\nSURPRISE!!!\n\nWow, did you know one interesting fact about your name?\nThe reverse of your name,\
         is exactly the same as your name!!\n" ;
    }
    else{
        cout << "Nice name! " << name << " \n";
    }

    return 0;
}