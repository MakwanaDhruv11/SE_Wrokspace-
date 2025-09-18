// Write a C program that accepts 10 integers from the user and stores them in an array. The
// program should then find and print the maximum and minimum values in the array.
// Challenge: Extend the program to sort the array in ascending order.

#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], big = 0, small = 0,temp=0;


    for (int i = 0; i < 10; i++)
    {
        printf("enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    big=arr[0];
    for (int j = 0; j < 10; j++)
    {
        if (big < arr[j])
        {
            big = arr[j];
        }
    }
    small=arr[0];
    for (int k = 0; k < 10; k++)
    {
        if (small > arr[k])
        {
            small = arr[k];
        }
    }

    printf("big number is %d", big);
    printf("\nsmall number is %d", small);

    

  for( int i = 0; i < 9; i++)  //row
    {
        for( int j = 0; j < 9 - i; j++)
        {
            if(arr[j] > arr[j + 1])  
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  
            }
        }
    }

    printf("\nAscending Order: ");
    for(int i = 0; i < 10; i++)  
    {
        printf("%d ", arr[i]);
    }



    return 0;
}