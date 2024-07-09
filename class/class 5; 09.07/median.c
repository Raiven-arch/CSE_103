#include <stdio.h>

int main ()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x >= y && x <= z || x >= z && x <= y) 
        printf("Median is: %d", x); 
    else if(y >= x && y <= z || y >= z && y <= x) 
        printf("Median is: %d", y);
    else 
        printf("Median is: %d", z);

return 0;

}