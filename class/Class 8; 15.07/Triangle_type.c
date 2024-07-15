#include <stdio.h>

int main()
{
    int side_1, side_2, side_3;
    int equiliteral, isoceles, scalene;

    equiliteral = isoceles = scalene = 0;

    printf("Enter three sides of triangle: ");

    for(int i = 0; i < 5; i++){
        
        scanf("%d%d%d", &side_1, &side_2, &side_3);

        if(side_1 == side_2 && side_2 == side_3)
            equiliteral++;
        else if (side_1 == side_2 || side_2 == side_3 || side_3 == side_1)
            isoceles++;
        else
            scalene++;
    }

    printf("Triangle types: \n\tEquiliteral: %d\n\tIsoleceles: %d\n\tScalene: %d", equiliteral, isoceles, scalene);
    return 0;
}