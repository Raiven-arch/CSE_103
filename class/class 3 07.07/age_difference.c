//This program use two person's age and calculate the difference.

#include <stdio.h>

int main ()
{
    int age_1, age_2;
    int age_difference;

    printf("Enter age of person 1 and person 2: ");
    scanf("%d%d", &age_1, &age_2);

    if (age_1 > age_2){
        age_difference = age_1 - age_2;
    } else {
        age_difference = age_2 - age_1;
    }

    printf("\nAge difference: %d", age_difference);
    
    return 0;
}