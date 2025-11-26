 // • Write a C program that takes three numbers from the user and determines: 
// o The largest number. 
// o The smallest number. 
// • Challenge: Solve the problem using both if-else and switch-case statements. 

#include<stdio.h>

int main()
{
    int a,b,c,biggest,smallest;

    printf("Enter value for 1 num : ");
    scanf("%d",&a);
    printf("Enter value for 2 num : ");
    scanf("%d",&b);
    printf("Enter value for 3 num : ");
    scanf("%d",&c);


    biggest = (a >= b && a >= c) ? a : ( b >= a && b >= c) ? b : c; 

    smallest = (a <= b && a <= c) ? a : ( b <= a && b <= c) ? b : c;

    switch(biggest)
    {
        case 0 :
        break;
        default:
        printf("\nBiggest number is %d", biggest);
    }
   
    switch(smallest)
    {
        case 0 :
        break;
        default:
        printf("\nSmallest number is %d", smallest);
    }


    return 0;
}






/-----------------challenge program----------------------------
#include <stdio.h>

int main()
{
    int r, i, j;

    printf("Enter the range : ");
    scanf("%d", &r);

    printf("\nPrime num btwn 1 and %d are : ", r);
    for (i = 2; i <= r; i++)
    {
        for (j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                break; 
            }
        }

        if (j == i)
        { 
            printf(" %d ", i);
        }
    }

    printf("\n");
    return 0;
}






