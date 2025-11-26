// Write a C program that takes an integer from the user and calculates the sum of its digits 
// using a while loop. 
// Challenge: Extend the program to reverse the digits of the number.

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}

/-----------challenge program-----------
    
#include <stdio.h>

int main() 
{
    int num, digit, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0) 
    {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
