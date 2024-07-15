#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b ,c;

    printf("Enter first side of the triangle: ");
    scanf("%d", &a);
    printf("Enter second side of the triangle: ");
    scanf("%d", &b);
    printf("Enter third side of the triangle: ");
    scanf("%d", &c);

    float s = (a + b + c) / 2.0;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea of the triangle: %.2f", area);
    return 0;
    
}