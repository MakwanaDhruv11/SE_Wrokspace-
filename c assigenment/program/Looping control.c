// Write a C program that uses the break statement to stop printing numbers
// when it reaches 5. Modify the program to skip printing the number 3 using the
// continue statement.
#include<stdio.h>
#include<conio.h>
int main()
{
    int b,c;
    printf("enter break number:- ");
    scanf("%d",&b);
    printf("enter continue number:- ");
    scanf("%d",&c);

    for (int i = 0; i <=10; i++)
    {
        if (i==b)
        {
            break;
        }
        printf("%d\n",i);
        
    }
    printf("your number break from %d\n\n",b);
    
    for (int i = 0; i <=10; i++)
    {
        if (i==c)
        {
            continue;
        }
        printf("%d\n",i);
        
    }
    printf("your skip %d and continue",c);



    return 0;
}