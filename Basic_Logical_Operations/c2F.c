#include <stdio.h>
#include <stdlib.h>

int main(){

    double temp_c, temp_far;
    
    printf("Enter temperature in degree Celsius:");
    scanf("%lf", &temp_c);

    temp_far = (temp_c/5.0)*9.0+32.0;
    printf("Temperature in Fahrenheit: %.03lf\n", temp_far);

    return 0;

}