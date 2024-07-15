//This program prints lowest temperature over a period of 7 days.

#include <stdio.h>

int main ()
{
    float temperature, lowest_temperature;
    lowest_temperature = 1000;

    for(int i = 1; i <= 7; i++){

        printf("Enter temperature of %d day: ", i);
        scanf("%f", &temperature);

        if(temperature < lowest_temperature)
            lowest_temperature = temperature;
    }

    printf("Highest tempareture: %.2f", lowest_temperature);

    return 0;
}