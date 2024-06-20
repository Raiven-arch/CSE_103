#include <stdio.h>

int main (){

    int a, b, c;

    printf("Enter three angels of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    int sum_of_angels = a + b + c;

    printf("%s", (sum_of_angels == 180) ? "Valid" : "Invalid");
   
    return 0;
}