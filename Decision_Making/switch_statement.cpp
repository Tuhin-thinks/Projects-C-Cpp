#include <string>
#include <iostream>

using namespace std;

void print_list(string arr[], int size){
    cout << size << " : Size of array\n";
    for (int i=0;i< size;i++){
        cout << "\t" << (i+1) << ". " << arr[i] << "\n";
    }
}

int main(){
    string product[] = {"Milk", "Egg", "NewsPaper", "Tea/Coffee", "Oil"};
    int choice;
    cout << "You can buy the following things from out shop:\n";
    print_list(product, int(sizeof(product)/sizeof(product[0])));
    cin >> choice;
    switch (choice){
        case 1:
        {
            string chosen_option = product[choice-1];
            cout << "Thanks for buying " << chosen_option << ", you can also buy Tea/Coffee from our shop!" << endl;
            break;
        }
        case 2:{
            string chosen_option = product[choice-1];
            cout << "Thanks for buying " << chosen_option << ", You can also buy oil from our shop!" << endl;
            break;
        }
        case 3:{
            string chosen_option = product[choice-1];
            cout << "Thanks for buying, have a great time reading those news!" << endl;
            break;
        }
        case 4:{
            string chosen_option = product[choice-1];
            cout << "Thanks for buying " << chosen_option << ", you can also buy Milk from our shop!" << endl;
            break;
        }
        case 5:{
            string chosen_option = product[choice-1];
            cout << "Thanks for buying " << chosen_option << ", you can also buy egg from our shop!" << endl;
            break;
        }
        default:
            cout << "you cannot buy this item...see you next time!" << endl;

    }
    
    return 0;
}