//Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
//153 = 1^3 + 5^3 + 3^3).
//• Challenge: Write a program to find all Armstrong numbers between 1 and 1000.
    
#include <stdio.h>

int main() 
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) 
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem); // cube of digit
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

/-----------------challenge program-------------
    
    

#include <stdio.h>

int main() 
{
    int num, temp, rem, sum;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; num++) 
    {
        temp = num;
        sum = 0;

        while (temp > 0) 
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem); // cube of digit
            temp = temp / 10;
        }

        if (sum == num) 
        {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
