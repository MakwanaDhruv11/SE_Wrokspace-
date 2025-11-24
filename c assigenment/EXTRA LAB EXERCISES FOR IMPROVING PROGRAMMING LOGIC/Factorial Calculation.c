// Write a C program that calculates the factorial of a given number using a function.
// Challenge: Implement both an iterative and a recursive version of the factorial function and
// compare their performance for large numbers.

#include <stdio.h>

//iterative method

int fact(int n) 
{
    int ans = 1, i = n;

    while (i > 0) 
    {
        ans = ans * i;
        i--;
    }
    return ans;
}


int main()
{
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("\nFactorial : %d ", fact(n));

    
}
