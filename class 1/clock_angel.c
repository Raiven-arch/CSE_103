#include <stdio.h>

int main ()
{
    int hour, minute, angle;

    printf("Enter time(hour:minute) in 12 hour format: ");
    scanf("%d:%d", &hour, &minute);

    int hour_angel = hour * 30;
    int minute_angel = minute * 6;

    printf("Angel of hour: %d\nAngel of minute: %d\n", hour_angel, minute_angel);

    /*int angel = hour_angel - minute_angel;
    
    if (hour_angel - minute_angel < 180){
        angle = 360 - hour_angel - minute_angel;
    } else {
        angle = angle;
    }
    
    printf("Angel: %d", angle);*/
 
    return 0;
}