#include <iostream>

long int dec_2_bin(int dec_no){
    if (dec_no == 0){
        return 0;
    }
    return (dec_no % 2 + (10 * dec_2_bin(dec_no/2)));
}

int main(){
    int dec;
    std::cout << "Enter a decimal number:";
    
    std::cin >> dec;

    std::cout << "Binary of " << dec << " is: ";
    long int res = dec_2_bin(dec);
    std::cout << res << "\n";


    return 0;
}