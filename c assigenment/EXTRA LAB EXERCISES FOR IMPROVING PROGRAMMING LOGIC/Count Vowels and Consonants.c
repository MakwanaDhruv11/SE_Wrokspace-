// Write a C program that takes a string from the user and counts the number of vowels and
// consonants in the string.
// Challenge: Extend the program to also count digits and special characters.
#include <stdio.h>

int main() {
    char str[200];
    int i;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            // Convert uppercase to lowercase
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}


/-----------challenge program-----------------
    #include <stdio.h>

int main() {
    char str[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

       
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        {

            
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9') 
        {
            digits++;
        }
        else if (ch != ' ' && ch != '\n') 
        {  
            special++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}
