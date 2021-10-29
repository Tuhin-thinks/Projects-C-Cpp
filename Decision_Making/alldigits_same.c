#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);

    // check whether all digits are the same
    int rem, digit = number % 10;
    number = number / 10;

    while (number){
        rem = number % 10;
        number = number / 10;
        if (rem != digit){
            printf("entered number has different digits\n");
            return 0;
        }
    }
    printf("All digits are the same\n");
    return 0;

}