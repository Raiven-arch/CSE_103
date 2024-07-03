#include <stdio.h>
#include <math.h>

int main ()
{
    int m, b;

    printf("Enter marbles: ");
    scanf("%d", &m);

    b = ceil(m/15.0);

    printf("Boxes: %d", b);
    return 0;
}
