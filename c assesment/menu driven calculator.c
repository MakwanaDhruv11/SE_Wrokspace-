#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;
    char cont;  // for continuing the loop

    do {
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0)
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case 5:
                printf("Exiting calculator. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select 1-5.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);  // space before %c to ignore newline

    } while (cont == 'y' || cont == 'Y');

    printf("Thank you for using the calculator!\n");
    return 0;
}

// Function definitions
float add(float a, float b)      { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b)   { return a / b; }
