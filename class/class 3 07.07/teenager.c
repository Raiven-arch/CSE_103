// This program check if a person is teenager.

#include <stdio.h>

int main ()
{
    int age;

    printf("Enter age of the person: ");
    scanf("%d", &age);

    printf("%s", (age >= 13 && age <= 19) ? "Teenager":"Not teenager");

    return 0;
}