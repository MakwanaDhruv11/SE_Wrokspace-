/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("enter number:- ");
    scanf("%d",&num);


    if (num%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    printf("\n");
    
    switch (num)
    {
        case 1:
        printf("January");
        break;
    
        case 2:
        printf("February");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("september");
        break;

        case 10:
        printf("October");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
        break;
    
    default: 
        printf("enter number  between 1 to 12 ");
        break;
    }
    



    return 0;
}