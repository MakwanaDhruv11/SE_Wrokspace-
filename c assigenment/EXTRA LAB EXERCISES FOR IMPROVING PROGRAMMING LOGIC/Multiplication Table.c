// Write a C program that takes an integer input from the user and prints its multiplication
// table using a for loop.
// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, ans, k;
    printf("enter number:-");
    scanf("%d", &n);
    printf("\nenter range:-");
    scanf("%d", &k);
    for (i = 0; i <= k; i++)
    {
        ans = n * i;
        printf("%d x %d = %d\n", n, i, ans);
    }

    return 0;
}