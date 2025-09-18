#include<stdio.h>
#include<math.h>

int main()
{

    int og,num,rem,p=0;
    double sum=0.0;
    

    printf("enter your value : ");
    scanf("%d",&og);

    num=og;

    while (num != 0)
    {
        num = num / 10;
        p++;
    }
    
    num=og;
    
    while(num > 0)
    {
        rem=num % 10;
        sum+=pow(rem,p);
        num=num / 10;
  
    }
    

    if(sum==og)
    printf("\nGiven number is armstrong");
    else
    printf("\nGiven number is not armstrong");

    return 0;
}