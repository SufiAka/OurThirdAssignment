#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"
#include <ctype.h>
#define N 10

int sum = 0;

typedef struct RightAnswers{
    int NumQuestion;
    int Answer;
}RightAnswers;

int main()
{
     int choice;
     int num;
     RightAnswers r[N];
     int n = 0;
    for(int i = 0; i<N; i++){
         printf("Question number %d: \n", i+1);
         sum = generateNumberOfOperations();

         printf("\n1) Forward.\n2)Answer.\nYour choice: ");
         scanf("%d", &choice);

         if(choice == 1) {
             r[n].NumQuestion= i+1;
             r[n].Answer = sum;
             ++n;
            printf("\n");
            continue;
         } else if(choice == 2) {
            printf("Your answer: ");
            scanf("%d", &num);
         } if (choice != 1 && choice != 2) exit(EXIT_FAILURE);
         printf("\n");

            if(sum == num)
            {
                printf("Good job!\n");
            } else {
                r[n].NumQuestion= i+1;
                r[n].Answer = sum;
                ++n;
      }
    }

    printf("\nThe answers you got right are: %d.\n", (N-n));
    printf("The answers you got wrong are: \n");
    for(int i = 0; i<n; i++)
    {
        printf("Question number %d: %d\n", r[i].NumQuestion, r[i].Answer);
    }
    return 0;
}
