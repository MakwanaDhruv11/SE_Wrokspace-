// Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
// resultant matrix.
// Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include<stdio.h>

int main()
{
    int a[2][2],b[2][2],total[2][2];

    
    printf("Enter 'a' matrix : ");
    for(int i=0 ;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
       
        scanf("%d",&a[i][j]);
        }
    }


    printf("\nEnter 'b' matrix : ");
    for(int i=0 ;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }

      for(int i = 0; i < 2; i++)
     {
        for(int j = 0; j < 2; j++)
         {
            total[i][j] = a[i][j] + b[i][j];
         }
     }
      

    
    printf("result of a+b : ");
    
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" %d ",total[i][j]);
        }
        printf("\n");
    }


return 0;
}

    return 0;
}
