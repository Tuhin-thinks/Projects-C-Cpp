#include <stdio.h>
#include <stdlib.h>

int main(){

    double basic_salary = 35000;
    double da = (12/100) * basic_salary;
    double hra = 250;
    double ta = 130;
    double others = 350;

    double pf, it;

    pf = (14/100)*basic_salary;
    it = (15/100)*basic_salary;

    double net_salary = basic_salary + da + hra + ta + others - (pf + it);

    printf("Basic Salary: %lf\n", basic_salary);
    printf("Net Salary: %lf\n", net_salary);


    return 0;
}