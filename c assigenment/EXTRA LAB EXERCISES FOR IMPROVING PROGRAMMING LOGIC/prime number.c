/*Write a C program that checks whether a given number is a prime number or not using a for
loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, count = 0,ccout,j,k;

    printf("enter number for check:-");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
    //------------------------------------------------------------------------------------------
printf("\nprime numbers 1 to %d :-",n);
printf("\n");
    for (j = 2; j < n; j++)
    {
        ccout=0;
        for ( k = 1; k < n; k++)
        {
            if (j% k == 0)
            {
                ccout++;
            }
        }
        if (ccout==2)
        {
            printf("%d ",j);
        }
        
    }

    return 0;
}