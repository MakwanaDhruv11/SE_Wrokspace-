// Write a C program that accepts 10 integers from the user and stores them in an array. The
// program should then find and print the maximum and minimum values in the array.
// Challenge: Extend the program to sort the array in ascending order.

#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min;

    printf("Enter 10 int:\n");

    
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0]; 

    
    for (i = 1; i < 10; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max value = %d\n", max);
    printf("Min value = %d\n", min);

    return 0;
}



/-----------challenge program --------

#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    printf("Enter 10 int:\n");

 
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < 10; i++) 
    {
        for (j = i + 1; j < 10; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
