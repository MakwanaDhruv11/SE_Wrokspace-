// Write a C program that takes a string as input and reverses it using a function.
// Challenge: Write the program without using built-in string handling functions.

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// int main()
// {
//     char str[100], rev[100];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     strcpy(rev, str);
//     strrev(rev);

//     if (strcmp(str, rev) == 0)
//     {
//         printf("string is a Palindrome string.");
//     }
//     else
//     {
//         printf("string is not a Palindrome string.");
//     }
// }

//-----------------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
int main()
{
  char str[100],revstr[100];
  int count =0,j;

  printf("enter string:- ");
  scanf("%s",&str);

  while (str[count] != '\0')
  {
    count++;    
  }
    
  j = count-1;
  for(int i = 0; i <=count; i++)
  {
    revstr[i] = str[j];
    j--;
  }
  printf("%s", revstr);

  return 0;
}


