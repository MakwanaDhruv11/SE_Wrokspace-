// Write a C program that implements a simple number guessing game. The program should
// generate a random number between 1 and 100, and the user should guess the number
// within a limited number of attempts.
// Challenge: Provide hints to the user if the guessed number is too high or too low.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0)); 
    int num = (rand() % 10) + 1;
    int num2;
    printf("you have 50 try (range 1 to 100)");
   //printf("%d",num);
    for (int i = 1; i <=50; i++)
    {
        printf("\nguess number:-");
        scanf("%d", &num2);
        if (num < num2)
        {
            printf("\nnumber is too high!!");
            printf("\nyou have %d chance left",(50-i));
        }
        else if (num > num2)
        {
            printf("\nnumber is too small!!");
            printf("\nyou have %d chance left",(50-i));
        }
        else
        {
            printf("\nyay your ans is right\n");
            break;
        }
    }

    return 0;
}