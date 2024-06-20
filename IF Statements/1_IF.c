#include <stdio.h>

int main (){
    float basic_salary, gross_salary, HRA, DA;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000){
        HRA = basic_salary * 0.2;
        DA = basic_salary * .8;
    } else if (basic_salary <= 20000){
        HRA = basic_salary * .25;
        DA = basic_salary * .90;
    } else {
        HRA = basic_salary * .3;
        DA = basic_salary * .95;
    }

    gross_salary = basic_salary + HRA + DA;

    printf("Gross salary: %.2f", gross_salary);
    
    return 0;
}