//This program prints highest temperature of 7 days.

#include <stdio.h>

int main ()
{
    float temperature, comfortable_temperature = 0;

    for(int i = 1; i <= 7; i++){

        printf("Enter temperature of %d day: ", i);
        scanf("%f", &temperature);

        if(temperature <= 22 && temperature <= 26)
            comfortable_temperature++;
    }

    printf("Days of comfortable tempareture: %.2f", comfortable_temperature);

    return 0;
}