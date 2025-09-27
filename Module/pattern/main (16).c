#include <stdio.h>

int main() {
    int n = 5;
    int i, j, s;// fixed number of rows

    for (i = 1; i <= n; i++) {
        // print spaces
        for ( s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
