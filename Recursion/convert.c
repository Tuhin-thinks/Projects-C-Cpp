/**
 * @file convert.c
 * @brief This program is to demonstrate recursion (infinite)
 * The program will not terminate when called with any positive number.
 * @version 0.1
 * @date 2021-11-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void convert(int n)
{

    if (n < 0)
        printf("%d", n);

    else
    {
        printf("%d\n", n);
        convert(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    convert(10);

    return 0;
}