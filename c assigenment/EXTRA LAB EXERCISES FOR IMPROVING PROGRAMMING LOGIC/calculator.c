/*
• Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
• Challenge: Extend the program to handle invalid operator inputs.
**/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,ans;
    char op;

    printf("enter number 1 :-");
    scanf("%d",&num1);

    printf("enter number 2 :-");
    scanf("%d",&num2);

    printf("\nEnter an operator (+, -, *, /, %%): ");
    scanf(" %c",&op);

    printf("%d %c %d\n your ans is :\n",num1,op, num2);

    switch (op)
        {
        case '+':
            ans=num1+num2;
            printf("%d %c %d = %d",num1,op,num2,ans);
            break;
        case '-':
            ans=num1-num2;
            printf("%d %c %d = %d",num1,op,num2,ans);
            break;
        case '*':
            ans=num1*num2;
            printf("%d %c %d = %d",num1,op,num2,ans);
            break;
        case '/':
            ans=num1/num2;
            printf("%d %c %d = %d",num1,op,num2,ans);
            break;
        case '%':
            ans=num1%num2;
            printf("%d %c %d = %d",num1,op,num2,ans);
            break;

        
        default:
        printf("enter valid operator(+, -, *, /, %%)");
            break;
        }
    return 0;
}