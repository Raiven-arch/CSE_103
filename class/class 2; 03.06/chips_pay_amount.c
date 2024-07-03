#include <stdio.h>
#include <math.h>

int main ()
{
    int chips, a, b, c;

    printf("Enter amount of chips: ");
    scanf("%d", &chips);

    a = chips / 4 * 3;
    b = chips % 4;

    c = a + b;

    printf("Chips required to pay: %d", c);
    return 0;
}
