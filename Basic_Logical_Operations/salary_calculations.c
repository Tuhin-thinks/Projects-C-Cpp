#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int salary;
    char sex;
    double final_salary=0.0;
    
    printf("Enter your salary:");
    scanf("%d", &salary);

    printf("Enter gender of the person (M for male F for female):");
    scanf(" %c%*[^\n]", &sex);

    printf("\n\n");
    // calculate salary based on gender
    if (sex == 'M'){
        printf("5%% bonus applied\n");
        final_salary = 105.0 * salary / 100.0;
    }
    else
    {
        printf("10%% bonus applied\n");
        final_salary = 110.0 * salary / 100.0;
    }

    // add extra bonus based on basic salary
    if (salary < 10000){
        printf("Extra 2%% bonus applied\n");
        final_salary += 102.0 * salary / 100.0;
    }

    printf("Total bonus received: %0.2f\n", (final_salary - salary));
    printf("Final salary: %0.2f\n", final_salary);
    

    return 0;
}