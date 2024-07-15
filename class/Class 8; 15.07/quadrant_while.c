#include <stdio.h>

int main ()
{
    int x, y, i;
    int a, b, c, d;

    a = b = c = d = 0;

    printf("Enter 5 points: ");
i=0;
    while(i < 5){
        scanf("%d%d", &x, &y);

        if (x > 0 && y > 0)
            a++;
        else if (x < 0 && y > 0)
            b++;
        else if (x < 0 && y < 0)
            c++;
        else    
            d++;
        i++;
    }

    printf("First quadrant: %d\nSecond quadrant: %d\nThird quadrant: %d\nFourth quadrant: %d\n", a, b, c, d);
    return 0;
}