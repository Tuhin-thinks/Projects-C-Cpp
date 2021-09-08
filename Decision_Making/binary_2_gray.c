#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int xor(int a, int b){
    return a ^ b;
}

int main(){

    int binary[26];
    char binary_string[26];

    printf("Enter binary number:");
    
    scanf("%s", binary_string);

    char ch;
    int SIZE = strlen(binary_string);
    
    for (int i=0; i< SIZE; i++){
        ch = binary_string[i];
        binary[i] = (int) ch - 48;
    }
    printf("Gray code:");

    for(int i=0;i<SIZE;i++){
        if (i == 0) // no change for MSB
            printf("%d", binary[i]);
        else
            printf("%d", xor(binary[i], binary[i-1]));

    }
    printf("\n");

    return 0;
}