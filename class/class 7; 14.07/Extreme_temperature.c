//This program prints number of days with extreme temperature(40C+) over a period of 7 days.

#include <stdio.h>

int main ()
{
    float temperature, extreme_temperature = 0;

    for(int i = 1; i <= 7; i++){

        printf("Enter temperature of %d day: ", i);
        scanf("%f", &temperature);

        if(temperature <= 40)
            extreme_temperature++;
    }

    printf("Days of extreme tempareture: %.2f", extreme_temperature);
    return 0;
}