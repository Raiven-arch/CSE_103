#include <stdio.h>

int main ()
{
    int base, height;

    printf("Enter base of the triangle: ");
    scanf("%d", &base);
    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    float area = (height * base) / 2.0f;

    printf("\nArea of the triangle: %.2f", area);
    return 0;
}