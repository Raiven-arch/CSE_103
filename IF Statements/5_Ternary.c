#include <stdio.h>

int main (){

    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("%s", (a + b > c && a + c > b && b + c > a) ? "Valid" : "Invalid");
   
    return 0;
}