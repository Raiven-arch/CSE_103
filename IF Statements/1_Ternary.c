#include <stdio.h>

int main (){
    float basic_salary, gross_salary, HRA, DA;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    HRA = (basic_salary <= 10000) ? (basic_salary * .2) :
          (basic_salary <= 20000) ? (basic_salary * .25) : (basic_salary * .3);

    DA = (basic_salary <= 10000) ? (basic_salary * .8) :
          (basic_salary <= 20000) ? (basic_salary * .9) : (basic_salary * .95);

    gross_salary = basic_salary + HRA + DA;

    printf("Gross salary: %.2f", gross_salary);
    
    return 0;
}