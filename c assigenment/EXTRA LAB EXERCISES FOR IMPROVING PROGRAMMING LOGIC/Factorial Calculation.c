// Write a C program that calculates the factorial of a given number using a function.
// Challenge: Implement both an iterative and a recursive version of the factorial function and
// compare their performance for large numbers.

// #include<stdio.h>
// #include<conio.h>
// int fact(int num)
// {
//     if (num==1)
//     {
//         return 1;
//     }
//     else
//     {
//          return num*fact(num - 1);
//     }
// }
// int main()
// {
//     int num;

//     printf("Enter Number for actorial: ");
//     scanf("%d", &num);
//     printf("factorial of %d : ",num);
//     for (int i = 1; i <=num; i++)
//     {
//         printf("%d x ",i);
//     }

//     printf("\n=%d", fact(num));

// }

//-------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>

int fact(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int num;

    printf("Enter Number for actorial: ");
    scanf("%d", &num);
    printf("factorial of %d : ", num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d x ", i);
    }

    printf("\n=%d", fact(num));
}
