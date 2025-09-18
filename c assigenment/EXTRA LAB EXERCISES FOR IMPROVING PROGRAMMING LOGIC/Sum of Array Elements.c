// Write a C program that takes N numbers from the user and stores them in an array. The
// program should then calculate and display the sum of all array elements.
// Challenge: Modify the program to also find the average of the numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("how many values you wnat to enter :- ");
    scanf("%d", &n);
    int a[n],sum=0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        printf("enter values %d:- ",i+1);
        scanf("%d",&a[i]);
    }
      for (int i = 0; i < n; i++)
    {
        sum+=a[i];        
    }
    avg=sum/n;
    printf("sum of array is %d ",sum);
    printf("\naverage of array is %f",avg);

    return 0;
}