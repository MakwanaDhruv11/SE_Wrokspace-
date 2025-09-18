#include<stdio.h>
#include<stdio.h>

int main() {
    int n, i, j, k, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // spaces
        for (k = 0; k < n - i - 1; k++) {
            printf("  ");
        }
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", num);   
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
