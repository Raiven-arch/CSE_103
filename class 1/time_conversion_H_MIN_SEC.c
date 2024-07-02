#include <stdio.h>

int main ()
{
    int total_second, hour, minute, second;

    printf("Enter time in seconds: ");
    scanf("%d", &total_second);

    hour = total_second / 3600;
    minute = (total_second % 3600) / 60;
    second = total_second % 60;

    printf("\nHour: %d\tMinute: %d\tSecond: %d", hour, minute, second);
    return 0;
}