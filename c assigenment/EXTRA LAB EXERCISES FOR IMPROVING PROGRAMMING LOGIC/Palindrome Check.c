// Write a C program that takes a number as input and checks whether it is a palindrome using 
// a function. 
// Challenge: Modify the program to check if a given string is a palindrome. 

#include<stdio.h>

int palinum(int n)
{
    int rn=0;
    while(n>0)
    {
        int rem = n % 10; 
        rn = (rn*10)+rem;
        n=n/10;   
    }
    return rn;

}


int main()
{
    int n,rn;

    printf("enter a value : ");
    scanf("%d",&n);

    rn=palinum(n);

    if(n==rn)
    printf("\ngiven number is palindrome");
    else
    printf("\nnumber is not palindrome");

    return 0;
}



/--------------------------------------------------------
   
    #include <stdio.h>
    #include<string.h>


void palinstr(char str[],char restr[])
{
    int i,j=0;
   
    for(i = 0; str[i] != '\0'; i++);
    {
    
        while(i > 0)
        {
            i--;
            restr[j]=str[i];
            j++;
        }
        restr[j] = '\0';
    }
}

int main()
{
    char str[100],restr[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    palinstr(str,restr);

    if(strcmp(str,restr)==0)
    printf("\ngiven string is palindrome");
    else
    printf("\ngiven string is not palindrome");
    

    return 0;
}


