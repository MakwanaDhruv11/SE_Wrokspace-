// Write a C program that counts the number of words in a sentence entered by the user. 
// Challenge: Modify the program to find the longest word in the sentence.
#include <stdio.h>

int countWords(const char *s) 
{
    int i = 0;
    int inWord = 0;
    int count = 0;

    while (s[i] != '\0') {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') 
        {
            inWord = 0;
        } else 
        {
            if (inWord == 0) 
            {
                // Start of a new word
                inWord = 1;
                count++;
            }
        }
        i++;
    }
    return count;
}

int main() 
{
    char sentence[1000];

    printf("Enter a sentence:\n");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    int words = countWords(sentence);
    printf("Number of words = %d\n", words);

    return 0;
}


/---------challenge program-----------------

    #include <stdio.h>
#include <ctype.h>

int countWords(const char *s) 
{
    int i = 0;
    int inWord = 0;
    int count = 0;
    while (s[i] != '\0') 
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') 
        {
            inWord = 0;
        } else 
        {
            if (inWord == 0) 
            {
                inWord = 1;
                count++;
            }
        }
        i++;
    }
    return count;
}

void findLongestWord(const char *s, char *longest) 
{
    int i = 0, start = -1;
    int maxLen = 0;

    int pos = 0;
    while (1) 
    {
        char c = s[i];
        if (c != ' ' && c != '\t' && c != '\n' && c != '\0') 
        {
            if (start < 0) 
            {
                start = i;  // mark beginning of a word
            }
        } else 
        {
            if (start >= 0) 
            {
                int len = i - start;
                if (len > maxLen) 
                {
                    maxLen = len;
                    // copy that word into longest
                    int j;
                    for (j = 0; j < len; j++) 
                    {
                        longest[j] = s[start + j];
                    }
                    longest[len] = '\0';
                }
                start = -1;
            }
            if (c == '\0')
                break;
        }
        i++;
    }

    if (maxLen == 0) 
    {
        // no word found
        longest[0] = '\0';
    }
}

int main() {
    char sentence[1000];
    char longest[1000];

    printf("Enter a sentence:\n");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    int words = countWords(sentence);
    findLongestWord(sentence, longest);

    printf("Number of words = %d\n", words);
    if (longest[0] != '\0') {
        printf("Longest word = \"%s\"\n", longest);
    } else 
    {
        printf("No words found in the sentence.\n");
    }

    return 0;
}
