//This program prints average temperature of 7 days of a city.

#include <stdio.h>

int main ()
{
    float temperature, average, count, temp_sum, i;

    count = temp_sum = 0;

    for(i = 1; i <= 7; i++){

        printf("Enter temperature of %.0f day: ", i);
        scanf("%f", &temperature);

        temp_sum +=temperature;
        count++;

        average = temp_sum / count;
    }

    printf("Average tempareture: %.2f", average);
}