//This program takes input of sunrise and sunset and determine whether day or night is bigger.

#include <stdio.h>

typedef int time;

int main ()
{
    time hour1, min1; // Sunrise time
    time hour2, min2; // Sunset time

    printf("Enter sunrise time(h:m): ");
    scanf("%d:%d", &hour1, &min1);
    printf("Enter sunset time(h:m): ");
    scanf("%d:%d", &hour2, &min2);

    // Convert time in minutes
    time sunrise_minutes = hour1 * 60 + min1;
    time sunset_minutes = hour2 * 60 + min2;

    if (sunset_minutes > sunrise_minutes)
        printf("\nDay is bigger");
    else
        printf("\nNight is bigger.");

return 0;
}