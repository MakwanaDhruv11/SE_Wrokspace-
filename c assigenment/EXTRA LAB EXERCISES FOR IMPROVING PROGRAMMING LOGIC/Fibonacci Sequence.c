//Write a C program that generates the Fibonacci sequence up to N terms using a recursive
//function.
//Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
//and recursive methods. Compare their efficiency.

// #include <stdio.h>
// #include <conio.h>

// int fibo(int n)
// {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibo(n-1) + fibo(n-2);
// }

// int main()
// {
//     int num;
//     printf("Enter number for Fibonacci sequence:- ");
//     scanf("%d", &num);//5

//     for (int i = 0; i < num; i++)
//     {
//         printf("%d ", fibo(i));
//     }

//     return 0;
// }




//------------------------------------------------------------------


int fibo(int n)
{
    int a = 0, b = 1, c;

    if (n == 0)
        return 0;   
    else if (n == 1)
        return 1;   

    for (int i = 2; i <= n; i++)   
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;  
}
int main()
{
    int num;
    printf("Enter number for Fibonacci sequence:- ");
    scanf("%d", &num);//5

    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibo(i));
    }

    return 0;
}
