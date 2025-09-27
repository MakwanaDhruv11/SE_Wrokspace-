#include <stdio.h>

int main() {
    int n = 5;
    int num = 1;
    int i, j;// fixed number of rows

    for (i = 1; i <= n; i++) {
        for (j =1; j<= i; j++) {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
