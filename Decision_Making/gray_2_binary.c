#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int xor(int a, int b){
    return a ^ b;
}

int main(){

    char gray_string[26];
    int gray[26];
    
    int bit;
    printf("Enter Gray code:");
    scanf("%s", gray_string);

    int binary[25];

    char ch;
    int SIZE = strlen(gray_string);
    
    for (int i=0; i< SIZE; i++){
        ch = gray_string[i];
        gray[i] = (int) ch - 48;  // integer representation of the character
    }

    for (int i=0; i<SIZE; i++){
        if (i==0)
            binary[i] = gray[i];
        else
            binary[i] = xor(binary[i-1], gray[i]);
    }

    printf("Binary:");
    for (int i=0;i<SIZE;i++){
        printf("%d", binary[i]);
    }

    printf("\n");
    
    return 0;
}