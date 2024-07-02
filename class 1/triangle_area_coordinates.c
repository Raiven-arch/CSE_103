#include <stdio.h>
#include <math.h>

int main ()
{
    int x1, x2, y1, y2, x3, y3;

    printf("Enter first coordinate of the triangle(x1, y1): ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter second coordinate of the triangle(x2, y2): ");
    scanf("%d,%d", &x2, &y2);
    printf("Enter third coordinate of the triangle(x3, y3): ");
    scanf("%d,%d", &x3, &y3);

    float area = .5f * abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));

    printf("\nArea of the triangle: %.2f", area);
    return 0;
    
}