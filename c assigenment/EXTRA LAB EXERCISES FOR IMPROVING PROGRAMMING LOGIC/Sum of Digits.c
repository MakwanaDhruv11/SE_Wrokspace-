// Write a C program that takes an integer from the user and calculates the sum of its digits 
// using a while loop. 
// Challenge: Extend the program to reverse the digits of the number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0,ndigit=0,rev=0,digit=0,tmp;

    printf("enter number for sum");
    scanf("%d",&num);
    tmp=num;
   while (num>0)
   {
    ndigit=num%10;
    sum=sum+ndigit;
    num=num/10;
   }
   printf("sum of digit is = %d",sum);

 while (tmp>0)
   {
    digit=tmp%10;
    rev=rev*10+digit;
    tmp=tmp/10;
   }
 printf("\nreverse of digit is = %d",rev);

return 0;
}