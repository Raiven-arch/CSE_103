#include <stdio.h>

int main (){

    float income, income_tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    income_tax = (income < 150000) ? 0 :
                 (income < 300001) ? income * .1 :
                 (income < 500001) ? income * .2 : income * .3;

    printf("Income tax: %.2f", income_tax);

    return 0;
}