#include <stdio.h>

int main(){

    int numbers[10];  // create an integer array of size 10
    printf("Enter 10 numbers below");
    for (int i=0; i<10; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Entered numbers are as follows:\n");
    // display entered numbers
    for(int i=0; i<10; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}