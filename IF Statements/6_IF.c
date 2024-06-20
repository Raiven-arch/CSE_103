#include <stdio.h>

int main (){

    int a, b, c;

    printf("Enter three angels of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    int sum_of_angels = a + b + c;

    if (sum_of_angels == 180){
        printf("Valid triangle");
    } else {
        printf("Invalid triangle");
    }
   
    return 0;
}