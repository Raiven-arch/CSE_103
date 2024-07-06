// This program calculates total working time.

#include <stdio.h>

int main ()
{
    int     start_hour, start_min;
    int     end_hour, end_min;
    int     start, end;
    int     time_hour, time_min;

    printf("Enter starting time(h:m): ");
    scanf("%d:%d",&start_hour, &start_min);
    
    printf("Enter ending time(h:m): ");
    scanf("%d:%d",&end_hour, &end_min);

    // convert starting and ending time in minutes

    start = start_hour * 60 + start_min;
    end = end_hour * 60 + end_min;

    // calculates total hours and minutes
    time_hour = (end - start) / 60;
    time_min = (end - start) % 60;

    printf("Total work time: %d hour(s) %d minute(s)", time_hour, time_min);
    return 0;
}
