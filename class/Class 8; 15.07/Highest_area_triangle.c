#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b ,c;
    float s, area, highest_area = 0;

    printf("Enter three sides of the triangle: ");
    
    
    for (int i = 0; i < 5; i++){

        scanf("%d%d%d", &a, &b, &c);
        
        
        s = (a + b + c) / 2.0f;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        if(area > highest_area)
            highest_area = area;
    }

    printf("\Highest area of the triangles: %.2f", highest_area);
    return 0;  
}