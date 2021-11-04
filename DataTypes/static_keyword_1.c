#include <stdio.h>

int r()
{

    static int num = 7;

    return num--;
}

int main()
{
    int x, y, z;
    // x = r();
    // y = r();
    // z = r();

    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("z = %d\n", z);

    for (r(); r(); r())

        printf("%d", r());

    printf("\n");

    return 0;
}