// Write a C program that takes N numbers from the user and stores them in an array. The
// program should then calculate and display the sum of all array elements.
// Challenge: Modify the program to also find the average of the numbers.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];   
    int sum = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all numbers = %d\n", sum);

    return 0;
}


/--------------challenge program-----------------

    #include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;
    float avg;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
