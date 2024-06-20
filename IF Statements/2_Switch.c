#include <stdio.h>

int main (){
    int term_1, term_2;

    printf("Enter marks of term 1: ");
    scanf("%d", &term_1);
    printf("Enter marks of term 2: ");
    scanf("%d", &term_2);

    switch (term_1 > term_2){
        
        case 1: printf("Highest mark recieved in term 1"); break;
        
        default: printf("Highest mark recieved in term 2");
    } 

    return 0;
}