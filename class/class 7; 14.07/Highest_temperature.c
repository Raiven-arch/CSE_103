//This program prints highest temperature of 7 days.

#include <stdio.h>

int main ()
{
    float temperature, highest_temperature;
    highest_temperature = 0;

    for(int i = 1; i <= 7; i++){

        printf("Enter temperature of %d day: ", i);
        scanf("%f", &temperature);

        if(temperature > highest_temperature)
            highest_temperature = temperature;
    }

    printf("Highest tempareture: %.2f", highest_temperature);

    return 0;
}