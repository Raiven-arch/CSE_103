#include <stdio.h>

int main (){

    int a, b, c;
    char * triangle_type;

    printf("Enter three sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c){
        triangle_type = "Equilateral";
    } else if (a == b || b == c){
        triangle_type = "Isosceles";
    } else {
        triangle_type = "Scalene";
    }

    printf("The triangle is %s", triangle_type);
   
    return 0;
}