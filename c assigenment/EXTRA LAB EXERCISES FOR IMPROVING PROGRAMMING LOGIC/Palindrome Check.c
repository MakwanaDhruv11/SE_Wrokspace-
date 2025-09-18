// Write a C program that takes a number as input and checks whether it is a palindrome using 
// a function. 
// Challenge: Modify the program to check if a given string is a palindrome. 

// #include<stdio.h>
// #include<conio.h>

// int pali(int num)
// {
//     int revnum=0,rem=0;
//     while(num>0)
//     {
//         rem = num % 10; 
//         revnum = (revnum*10)+rem;
//         num=num/10;   
//     }
//     return revnum;

// }

// int main()
// {
//     int num,revnum;

//     printf("enter value To Check:- ");
//     scanf("%d",&num);

//     revnum=pali(num);

//     if(num==revnum)
//     printf("\ngiven number is palindrome");
//     else
//     printf("\nnumber is not palindrome");

//     return 0;
// }
// ---------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <string.h>

int Pali(char str[])
{
    char rev[100];
    strcpy(rev, str);
    strrev(rev);

    if (strcmp(str, rev) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[100];
    int chk;

    printf("Enter a string: ");
    scanf("%s", str);

    switch (Pali(str))
    {
    case 1:
        printf("string is a Palindrome string.");
        break;
    case 0:
        printf("string is not a Palindrome string.");
        break;
    }
}