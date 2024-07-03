#include <stdio.h>

int main ()
{
    int hour, minute;

    printf("Enter time(hour:minute) in 12 hour format: ");
    scanf("%d:%d", &hour, &minute);

    int hour_angle = (hour * 30) + (.5 * minute);
    int minute_angle = minute * 6;

    printf("Angel of hour: %d\nAngel of minute: %d\n", hour_angle, minute_angle);
    return 0;
}
