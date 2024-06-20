#include <stdio.h>

int main (){
    int term_1, term_2;

    printf("Enter marks of term 1: ");
    scanf("%d", &term_1);
    printf("Enter marks of term 2: ");
    scanf("%d", &term_2);

    const char * highest_mark = (term_1 > term_2) ? "term 1" : "term 2";

    printf("Highest mark recieved in %s", highest_mark);

    return 0;
}