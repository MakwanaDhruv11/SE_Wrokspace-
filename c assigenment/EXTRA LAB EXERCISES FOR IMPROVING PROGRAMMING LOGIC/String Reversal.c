// Write a C program that takes a string as input and reverses it using a function.
// Challenge: Write the program without using built-in string handling functions.


#include <stdio.h>
#include <string.h>

void reverseString(char str[]) 
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() 
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    reverseString(s);

    printf("Reversed string: %s\n", s);

    return 0;
}





/------------challenge program---------------

#include <stdio.h>

void reverseManual(char str[]) 
{
    int i = 0, j, len = 0;
    char temp;

    // Find length manually
    while (str[len] != '\0') 
    {
        len++;
    }

    j = len - 1;

    // Reverse manually
    while (i < j) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() 
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    reverseManual(s);

    printf("Reversed string (manual): %s\n", s);

    return 0;
}

