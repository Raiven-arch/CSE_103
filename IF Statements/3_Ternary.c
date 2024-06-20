#include <stdio.h>

int main (){

    int x, y;

    printf("Enter two points (x, y): ");
    scanf ("%d,%d", &x, &y);

    char * type = (x > 0 && y > 0) ? "Quadrant I" :
                  (x < 0 && y < 0) ? "Quadrant II" :
                  (x < 0 && y < 0) ? "Quadrant III" :
                  "Quadrant IV";

    printf("%s", type);

    return 0;
}