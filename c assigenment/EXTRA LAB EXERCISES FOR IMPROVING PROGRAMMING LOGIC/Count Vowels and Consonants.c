// Write a C program that takes a string from the user and counts the number of vowels and
// consonants in the string.
// Challenge: Extend the program to also count digits and special characters.
#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char str[100];
    int count = 0, Vowels = 0,digit=0,special=0,Consonant=0;

    printf("enter string:- ");
    scanf("%s",&str);

    while (str[count] != '\0')
    {
        char st = str [count];
        if (st == 'a' || st == 'e' || st == 'i' || st == 'o' || st == 'u')
        {
            Vowels++;
        }
        else if(st >= '0' && st<='9')
        {
         digit++;
        }
         else if (st >= 'a' && st <= 'z')
        {
            Consonant++;
        }
        else
        {
            special++;
        }
        count++;
    }
   
    
          
    printf("\nVowels : %d ",Vowels);
    printf("\nConsonant : %d ",Consonant);
    printf("\nSpecial : %d ",special);
    printf("\nDigit : %d ",digit);

    return 0;
}