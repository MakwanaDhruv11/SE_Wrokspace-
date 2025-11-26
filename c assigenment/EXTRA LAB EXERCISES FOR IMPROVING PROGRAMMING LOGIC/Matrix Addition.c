// Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
// resultant matrix.
// Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }


    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Result of addition (2x2):\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



/-----------challenge program----------
    

 #include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    printf("Enter values for first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter values for second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }


    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            C[i][j] = 0;
        }
    }


    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            for (k = 0; k < 3; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Result of multiplication (3x3):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
