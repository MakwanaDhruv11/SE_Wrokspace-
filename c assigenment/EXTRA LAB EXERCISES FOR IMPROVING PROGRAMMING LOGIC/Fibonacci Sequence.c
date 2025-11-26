//Write a C program that generates the Fibonacci sequence up to N terms using a recursive
//function.
//Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
//and recursive methods. Compare their efficiency.

#include <stdio.h>

int fib(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", fib(i));
    }

    return 0;
}


/---------challenge------------
   #include <stdio.h>

int fibRec(int n) 
{
    if (n <= 1)
        return n;
    return fibRec(n - 1) + fibRec(n - 2);
}

int fibIter(int n) 
{
    int a = 0, b = 1, next, i;

    if (n == 0)
        return 0;

    for (i = 2; i <= n; i++) 
    {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() 
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Nth Fibonacci (Recursive) = %d\n", fibRec(n));
    printf("Nth Fibonacci (Iterative) = %d\n", fibIter(n));

  
    printf("\nNote:\n");
    printf("- Recursive method is slower because it repeats calculations.\n");
    printf("- Iterative method is faster and uses simple loops.\n");

    return 0;
}
