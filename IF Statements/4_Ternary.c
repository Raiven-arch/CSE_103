#include <stdio.h>

int main (){

    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    char * triangle_type = (a == b && b == c) ? "Equilateral" :
                           (a == b || b == c) ? "Isosceles" :
                           "Scalene";
    
    printf("The triangle is %s", triangle_type);
   
    return 0;
}