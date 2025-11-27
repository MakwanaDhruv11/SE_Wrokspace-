// Write a C program that calculates the factorial of a given number using a function.
// Challenge: Implement both an iterative and a recursive version of the factorial function and
// compare their performance for large numbers.

#include <stdio.h>

long long factorial(int n) 
{
    long long f = 1;
    for (int i = 1; i <= n; i++) 
    {
        f = f * i;
    }
    return f;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Factorial of a negative number is not possible.\n");
        return 0;
    }

    long long ans = factorial(num);
    printf("Factorial of %d is %lld\n", num, ans);

    return 0;
}




/----------challenge program----------------

#include <stdio.h>
#include <time.h>

unsigned long long fact_iter(int n) 
{
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++) 
    {
        f = f * i;
    }
    return f;
}

unsigned long long fact_rec(int n) 
{
    if (n <= 1)
        return 1;
    return n * fact_rec(n - 1);
}

int main() 
{
    int n;
    clock_t start, end;
    double time_iter, time_rec;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Factorial of a negative number is not defined.\n");
        return 0;
    }

    // Iterative timing
    start = clock();
    unsigned long long ires = fact_iter(n);
    end = clock();
    time_iter = (double)(end - start) / CLOCKS_PER_SEC;

    // Recursive timing
    start = clock();
    unsigned long long rres = fact_rec(n);
    end = clock();
    time_rec = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nIterative Result : %llu", ires);
    printf("\nTime (Iterative) : %f seconds\n", time_iter);

    printf("\nRecursive Result : %llu", rres);
    printf("\nTime (Recursive) : %f seconds\n", time_rec);

    return 0;
}

