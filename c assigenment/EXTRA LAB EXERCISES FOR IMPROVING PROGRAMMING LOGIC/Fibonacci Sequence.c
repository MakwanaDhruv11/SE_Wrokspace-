//Write a C program that generates the Fibonacci sequence up to N terms using a recursive
//function.
//Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
//and recursive methods. Compare their efficiency.

#include <stdio.h>
#include <time.h>

//recursive-------------
long long fib_rec(int n)
{
   if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fib_rec(n-1) + fib_rec(n-2);
    }
}

//iterative------------
long long fib_it(int n)
{
    if(n == 0)
    return 0;

    if(n == 1)
    return 1; 

    long long a = 0, b = 1;

    for (int i = 2; i <= n; i++)
    {
        long long c = a + b;
                  a = b;
                  b = c;
    }
    return b;
}

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    // time recursive
    clock_t r_start = clock();
    long long r = fib_rec(n);
    clock_t r_end = clock();
    double r_sec = (double)(r_end - r_start) / CLOCKS_PER_SEC;

    // time iterative
    clock_t i_start = clock();
    long long it = fib_it(n);
    clock_t i_end = clock();
    double i_sec = (double)(i_end - i_start) / CLOCKS_PER_SEC;

    printf("\nRecursive F(%d) = %lld, time = %.6f s", n, r, r_sec);
    printf("\nIterative F(%d) = %lld, time = %.6f s", n, it, i_sec);

    return 0;
}
