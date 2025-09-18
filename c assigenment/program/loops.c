// Write a C program to print numbers from 1 to 10 using all three types of loops
// (while, for, do-while).


#include<stdio.h>
#include<conio.h>
int main()
{

    int i;

    printf("while loop\n");
    i=1;

    while (i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    printf("\nfor loop\n");

    for ( i = 1; i <=10; i++)
    {
        printf("%d\n",i);
    }
    
    printf("\ndo-while loop\n");

    i=1;
   do
   {
    printf("%d\n",i);
    i++;
   } while (i<=10);
   

    


    return 0;
}