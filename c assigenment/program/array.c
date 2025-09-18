#include<stdio.h>
#include<conio.h>
int main()
{
    int one[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter number :- ");
        scanf("%d",&one[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("your number is :%d \n",one[i]);
    }
    

    int mat[3][3],ans=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter matrix number :-");
            scanf("%d",&mat[i][j]);
        }
        
    }
    for (int k = 0; k < 3; k++)
    {
        for (int h = 0; h < 3; h++)
        {
             ans+=mat[k][h];
        }
        
    }

    printf("your sum is :- %d",ans);

    
    
    


    return 0;
}