//This program takes 5 points and decide how many of them are in which quadrant.

#include <stdio.h>

int main ()
{
    int x, y, i;
    int a, b, c, d; //Quadrants;

    a = b = c = d = 0;

    printf("Enter 5 points: ");

    for(i = 0; i < 5; i++){
        scanf("%d%d", &x, &y);

        if (x > 0 && y > 0)
            a++;
        else if (x < 0 && y > 0)
            b++;
        else if (x < 0 && y < 0)
            c++;
        else    
            d++;
    }

    printf("First quadrant: %d\nSecond quadrant: %d\nThird quadrant: %d\nFourth quadrant: %d\n", a, b, c, d);
    return 0;
}