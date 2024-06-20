#include <stdio.h>

int main (){
    int term_1, term_2;

    printf("Enter marks of term 1: ");
    scanf("%d", &term_1);
    printf("Enter marks of term 2: ");
    scanf("%d", &term_2);


    if (term_1 > term_2){
        printf("Highest mark received in term 1");
    } else {
        printf("Highest mark received in term 2");
    }

    return 0;
}