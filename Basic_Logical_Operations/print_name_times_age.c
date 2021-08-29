#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int age;
    char name[50];

    age = 15;

    printf("Enter the name of the person:");
    scanf("%[^\n]*c", name);

    printf("Age of the %s is %d.\n", name, age);

    for (int i=0;i<age;i++){
        printf("%s\n", name);
    }

    return 0;
}