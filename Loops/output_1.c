#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p[20];
    char *s = "string";

    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        p[i] = s[length - i];
    }
    printf("%s\n", p);  // because of first character is \0 nothing will be printed
}