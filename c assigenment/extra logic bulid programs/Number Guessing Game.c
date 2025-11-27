// Write a C program that implements a simple number guessing game. The program should
// generate a random number between 1 and 100, and the user should guess the number
// within a limited number of attempts.
// Challenge: Provide hints to the user if the guessed number is too high or too low.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secret, guess;
    int attempts = 5;

    srand(time(0)); 
    secret = (rand() % 100) + 1; // number between 1 and 100

    printf("Guess the number (1 to 100)\n");
    printf("You have %d attempts.\n", attempts);

    while (attempts > 0) 
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess == secret) 
        {
            printf("Congratulations! You guessed the number!\n");
            return 0;
        }

        attempts--;
        if (attempts == 0)
            break;

        printf("Wrong guess! Attempts left: %d\n", attempts);
    }

    printf("\nSorry! You ran out of attempts.\n");
    printf("The correct number was: %d\n", secret);

    return 0;
}


/-------------challenge program-------------------


    
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secret, guess;
    int attempts = 7;  // more attempts for hint version

    srand(time(0));
    secret = (rand() % 100) + 1; 

    printf("Guess the number (1 to 100)\n");
    printf("You have %d attempts.\n", attempts);

    while (attempts > 0) 
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess == secret) 
        {
            printf("Great! You guessed the correct number!\n");
            return 0;
        }
        else if (guess > secret) 
        {
            printf("Your guess is TOO HIGH!\n");
        }
        else {
            printf("Your guess is TOO LOW!\n");
        }

        attempts--;
        printf("Attempts left: %d\n", attempts);
    }

    printf("\nGame Over! You could not guess the number.\n");
    printf("The correct number was: %d\n", secret);

    return 0;
}

