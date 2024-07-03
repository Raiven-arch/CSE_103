#include <stdio.h>

int main ()
{
    int chips, free_chips;

    printf("Enter amount of chips: ");
    scanf("%d", &chips);

    free_chips = chips / 4;

    printf("Amount of free chips: %d", free_chips);
    return 0;
}

