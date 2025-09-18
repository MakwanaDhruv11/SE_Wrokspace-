// Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
// resultant matrix.
// Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include <stdio.h>
#include <conio.h>
int main()
{
    // int a[2][2], b[2][2], i, j, sum[2][2];

    // printf("enter a 2x2 matrix:-");

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("\na[%d][%d] = ", i, j);
    //         scanf("%d", &a[i][j]);
    //     }
    // }

    // printf("\nenter b 2x2 matrix:-");

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("\nb[%d][%d] = ", i, j);
    //         scanf("%d", &b[i][j]);
    //     }
    // }

    // printf("\na 2x2");

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("\na[%d][%d]=%d", i, j, a[i][j]);
    //     }
    // }

    // printf("\nb 2x2");

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("\nb[%d][%d]=%d", i, j, b[i][j]);
    //     }
    // }

    // printf("\nsum of a&b 2x2 matrix");

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         sum[i][j] = a[i][j] + b[i][j];
    //         printf("\nsum[%d][%d]=%d", i, j, sum[i][j]);
    //     }
    // }
    //--------------------------------------------------------------------------------------------

    int c[3][3], d[3][3], nsum[3][3]={0}, i, j,k;

    printf("enter c 3x3 matrix:-");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nc[%d][%d] = ", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    printf("enter d 3x3 matrix:-");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nd[%d][%d] = ", i, j);
            scanf("%d", &d[i][j]);
        }
    }

    for (i = 0; i < 3; i++) // row
    {
        for (j = 0; j < 3; j++) // col
        {
            for (k = 0; k < 3; k++)
            {
                nsum[i][j] += c[i][k] * d[k][j];
            }
        }
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf(" 3x3 matrix is : %d",nsum[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}