#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    int ft=1;
    for (int i = 1; i <=n; i++)
    {
        ft=ft*i;
    }
        
    return ft;
}

int main()
{
    int ans;
    printf("enter your number :- ");
    scanf("%d",&ans);

    printf("Factorial is: %d\n", fact(ans));





    return 0;
}