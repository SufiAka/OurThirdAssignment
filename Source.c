#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Questions.h"

int generateNumberOfOperations(void){
    int number = rand()%2 + 3;
    int c = 0;

    for(int i = 0; i < number; i++){
        int operation = rand()%4 + 1;
        int a = rand()%49;
        int b = rand()%49;

        switch(operation)
        {
        case 1:
            if(i == 0) {
                printf("%d + %d", a, b);
            }
           if(i != 0){
            a = c;
            printf(" + %d", b);}
            c=a+b;
            break;
        case 2:
            if(i == 0){
                printf("%d - %d", a, b);
            }
           if(i != 0){
            a = c;
            printf(" - %d",b);}
            c=a-b;
            break;
        case 3:
            if(i == 0){
                printf("%d * %d", a, b);
            }
           if(i != 0){
            a = c;
            printf(" * %d", b);}
            c=a*b;
            break;
        case 4:
             if(i == 0){
                printf("%d / %d", a, b);
            }
           if(i != 0){
            a = c;
            printf(" / %d", b);}
            c=a/b;
            break;
        default:
            break;
        }
    }
    return c;
}
