 
// • Write a C program that takes three numbers from the user and determines: 
// o The largest number. 
// o The smallest number. 
// • Challenge: Solve the problem using both if-else and switch-case statements. 

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3,bnum,snum,bsw,ssw;
    printf("enter number1:- ");
    scanf("%d",&num1);

    printf("enter number2:- ");
    scanf("%d",&num2);

    printf("enter number3:- ");
    scanf("%d",&num3);
  
    printf("\nif else**********");

    // if else big number

    bnum=num1;
    if (bnum<num2)
    {
        bnum=num2;
    }
     if (bnum<num3)
    {
        bnum=num3;
    }
     printf("\nbig number is - %d",bnum);

    // if else small number

    snum=num1;
    if (snum>num2)
    {
        snum=num2;
    }
     if (snum>num3)
    {
        snum=num3;
    }
     printf("\nsmall number is - %d",snum);
    
     

    printf("\nswitch case***************");
 
    if (num1>=num2 || num1>=num3)
    {
        bsw=1;
    }
    if (num2>=num1 || num2>=num3)
    {
        bsw=2;
    }
    if (num3>=num2 || num3>=num1)
    {
        bsw=3;
    }

    if (num1<=num2 || num1<=num3)
    {
        ssw=1;
    }
    if (num2<=num1 || num2<=num3)
    {
        ssw=2;
    }
    if (num3<=num2 || num3<=num1)
    {
        ssw=3;
    }
     /// switch case big number 
    switch (bsw)
    {
    case 1:
        printf("\nNUMBER 1 IS BIG");
        break;
    case 2:
        printf("\nNUMBER 2 IS BIG");
        break;
    case 3:
        printf("\nNUMBER 3 IS BIG");
        break;
    
    default:
        break;
    }
      /// switch case small number 
    switch (ssw)
    {
    case 1:
        printf("\nNUMBER 1 IS SMALL");
        break;
    case 2:
        printf("\nNUMBER 2 IS SMALL");
        break;
    case 3:
        printf("\nNUMBER 3 IS SMALL");
        break;
    
    default:
        break;
    }












     return 0;
    
}