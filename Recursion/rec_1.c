#include <stdio.h>
#include <stdlib.h>

int f(int n){
    static int i = 1;  // static variable, so it is shared between all recursive calls & initialized only once
    printf("static i=%d, n=%d\n", i, n);
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    printf("  calling n=%d, i=%d\n", n, i);
    return f(n);

}

int main(){
    int result = f(1);
    printf("%d", result);
}