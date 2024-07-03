#include <stdio.h>
#include <math.h>

int main ()
{
    int len, wid;

    printf("Enter length of room: ");
    scanf("%d", &len);
    printf("Enter width of room: ");
    scanf("%d", &wid);

    int len_table = floor (len / 3.0);
    int wid_table = floor (wid / 3.0);

    int total_table = len_table * wid_table;

    printf("Total table(s): %d", total_table);
    return 0;
}
