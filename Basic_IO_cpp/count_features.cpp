#include <iostream>

bool is_odd(int num){
    return ((num % 2) != 0);
}

bool is_even(int num){
    return !is_odd(num);
}

bool is_positive(int num){
    return num >= 0;
}
bool is_negative(int num){
    return !is_positive(num);
}

int main(){
    using namespace std;
    int number;
    int p_count=0, n_count=0, o_count=0, e_count=0;
    
    for(int i = 0; i <10; i++){
        cout << "Enter number " << i << ": ";
        cin >> number;
        if(is_positive(number))
            p_count ++;
        else
            n_count++;
        
        if(is_even(number))
            e_count++;
        else
            o_count ++;
        
    }// end of for
    cout << "\n============ OUTPUT ==========" << endl;
    cout << "Positive cout=" << p_count << endl;
    cout << "Negative count=" << n_count << endl;
    cout << "Odd count=" << o_count << endl;
    cout << "Even count=" << e_count << endl;

    return 0; // end of main

}