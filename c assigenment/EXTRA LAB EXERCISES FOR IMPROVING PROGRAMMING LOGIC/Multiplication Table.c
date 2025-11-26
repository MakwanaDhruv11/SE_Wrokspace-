// Write a C program that takes an integer input from the user and prints its multiplication
// table using a for loop.
// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include <stdio.h>

int main() 
{
    int num;
      
    printf("Enter an int to print its mul table: ");
    scanf("%d", &num);
    
    printf("Mul table for %d:\n", num);
    
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}

/------------challenge program--------------

#include <stdio.h>

int main() 
{
    int num, r;
    
    printf("Enter an int to print its mul table: ");
    scanf("%d", &num);
    
    printf("Enter the r for the mul table (10 for 1 to 10): ");
    scanf("%d", &r);
    
    printf("Mul table for %d (from 1 to %d):\n", num, r);
    
    for (int i = 1; i <= r; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
