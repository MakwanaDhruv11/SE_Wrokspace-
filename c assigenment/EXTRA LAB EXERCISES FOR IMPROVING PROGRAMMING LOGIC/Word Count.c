// Write a C program that counts the number of words in a sentence entered by the user. 
// Challenge: Modify the program to find the longest word in the sentence.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], biggest[100], temp[100];
    int spc = 0, num = 0, maxlen = 0, j = 0;

    printf("Enter string: ");
    gets(str);

    num = strlen(str);
   

    for (int i = 0; i <= num; i++)
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            temp[j++] = str[i];
        }
        else 
        {
            temp[j] = ' ';
            if (j > 0)
            {
                if (j > maxlen) 
                {
                    maxlen = j;
                    strcpy(biggest, temp);
                }
                spc++; 
            }
            j = 0; 
        }
    }

    printf("\n%d words in this sentence", spc);
    printf("\nlongest string is: %s ", biggest);

    return 0;
}