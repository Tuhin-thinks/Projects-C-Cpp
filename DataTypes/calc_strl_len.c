#include <stdio.h>

int main(){

    char calculateLength[30];
    printf("Enter your name: ");
    fgets(calculateLength, 30, stdin);
    scanf("%s", calculateLength);

    int sum = 0, i;

    for (i=0; calculateLength[i] != '\0'; i++){
        sum++;
    }
    // sum--;
    printf("Length of your name is: %d\n", sum);
}