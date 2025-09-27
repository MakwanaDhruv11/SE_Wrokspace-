#include <stdio.h>

int main() {
    int n = 5;         
    int i, j, s;

    for (i = 1; i <= n; i++) {          
        for (s = 1; s <= n - i; s++) {  
            printf(" ");
        }
        for (j = 1; j <= i; j++) {      
        }
        printf("\n");                  
    }

    return 0;
}
