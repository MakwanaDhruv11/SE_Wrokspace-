//Write a C program that generates Pascal’s Triangle up to N rows using loops.
//• Challenge: Implement the same program using a recursive function.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int value = 1;

        // Print spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print values
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}


/-------------challenge program---------------


#include <stdio.h>

// Recursive function to compute nCr
int nCr(int n, int r) 
{
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() 
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {

        for (j = 0; j < n - i - 1; j++) 
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++) 
        {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }

    return 0;
}

