#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int friends_count=0;
    cout << "How many friends do you have? ";
    cin >> friends_count;

    if (friends_count>=10){
        cout << "Are you kidding me, you got friends?!\nAny ways lets continue...\n";
    }
    
    cout << "Name some of your \"Friends\":";

    
    string friends_name[friends_count], name_temp, trash;
    for (int i=0;i<friends_count;i++){
        cout << "Enter name "<< i+1 << ":";
        cin >> name_temp;
        getline(cin, trash);
        friends_name[i] = name_temp;
    }

    cout << friends_name[0] << " is your best friend? ";
    string res;
    cin >> res;
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    if (res.compare("yes")==0){
        cout << "Ah, seems I have guessed it correctly\n";
    }
    return 0;
}