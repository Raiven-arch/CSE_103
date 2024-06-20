#include <stdio.h>

int main (){

    float income, income_tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 150000){
        income_tax = 0;
    } else if (income < 300001){
        income_tax = income * .1;
    } else if (income < 500000){
        income_tax = income * .2;
    } else {
        income_tax = income * .3;
    }

    printf("Income tax: %.2f", income_tax);

    return 0;
}