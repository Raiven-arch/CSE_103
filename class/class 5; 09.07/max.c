#include <stdio.h>

int main ()
{
    int x, y, z;
    int max;

    printf("Enter three numbers (X Y Z): ");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y)
        if ( x > z)
            printf("%d is the max", x);
        else 
            printf("%d is the max", z);
    else if (x < y)
        if (y > z)
            printf("%d is the max", y);
        else 
            printf("%d is the max",z);

    return 0;
}