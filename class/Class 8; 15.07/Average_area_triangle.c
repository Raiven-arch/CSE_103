//This program calculates average area of 5 triangles.

#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b ,c;
    float s, area, total_area = 0;

    printf("Enter three sides of the triangle: ");
    
    
    for (int i = 0; i < 5; i++){

        scanf("%d%d%d", &a, &b, &c);
        
        //Heron's formula
        s = (a + b + c) / 2.0f;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        total_area += area;
        }

    printf("\nAverage area of the triangle: %.2f", total_area / 5);
    return 0;
    
}