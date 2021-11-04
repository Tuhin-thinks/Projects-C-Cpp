#include <stdio.h>

int main()

{

    int a[] = {2, 4, 6, 8, 10};

    int i, sum = 0, *b = a + 4, val1, val2;

    for (i = 0; i < 5; i++)

        
        val1 = (*b - i);
        val2 = *(b - i);
        printf("val1=%d, val2=%d\n", val1, val2);
        sum = sum + val1 - *(b - i);


    printf("%d\n", sum);

    return 0;
}