// LAB EXERCISE 2: Check Number Properties 
 
// • Write a C program that takes an integer from the user and checks the following using 
// different operators: 
// o Whether the number is even or odd. 
// o Whether the number is positive, negative, or zero. 
// o Whether the number is a multiple of both 3 and 5.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("enter any number:-");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("\n even number");
    }
    else
    {
        printf("\n odd number");
    }


    
    if (0<num)
    {
        printf("\n positive number");
    }
    else if (0>num)
    {
        printf("\n negative number");
    }
    else
    {
        printf("\n zero");
    }
    

    if (num%3==0 && num%5==0)
    {
        printf("\n number is a multiple of both 3 and 5.");
    }
    else
    {
        printf("\n number is nota multiple of both 3 and 5.");
    }
    
    



    return 0;
}