#include <stdio.h>
#include <string.h>

int main(){

    char name[20] = "tuhin";
    int len = strlen(name);
    char revname[20];  // declare a array of size 20

    printf("Length of string: %d\n", len);

    for (int i = len - 1; i >= 0; i--) {
        revname[len - 1 - i] = name[i];
    }
    printf("Reversed name: %s\n", revname);
    return 0;
}