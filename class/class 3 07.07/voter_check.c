// This program check if a person is voter or not

#include <stdio.h>

int main ()
{
    int age;

    printf("Enter age of the person: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("\nVoter");
    } else {
        printf("\nNon voter");
    }

    return 0;
}