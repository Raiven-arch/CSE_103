#include <stdio.h>

int main ()
{
    int hour, minute;
    int angle;

    printf("Enter time(hour:minute) in 12 hour format: ");
    scanf("%d:%d", &hour, &minute);

    int hour_angle = (hour * 30) + (0.5 * minute);
    int minute_angle = minute * 6;

    angle = (hour_angle > minute_angle) ? hour_angle - minute_angle : minute_angle - hour_angle;

    printf("Angel difference: %d", angle);
    
    return 0;
}