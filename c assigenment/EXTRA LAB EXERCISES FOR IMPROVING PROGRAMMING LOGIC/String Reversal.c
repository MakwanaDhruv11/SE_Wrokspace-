// Write a C program that takes a string as input and reverses it using a function.
// Challenge: Write the program without using built-in string handling functions.


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


