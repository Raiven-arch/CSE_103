#include <stdio.h>

int main ()
{
    int minute, charge;

    printf("Enter parking time in minutes: ");
    scanf("%d", &minute);

    charge = ceil(minute / 30.0) * 40;

    printf("\nParking charge: %d", charge);
    return 0;
}
