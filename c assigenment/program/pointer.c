#include <stdio.h>

int main() {
    int num = 10;       
    int *ptr;           

    ptr = &num;         

    printf("Before: num = %d\n", num);

    *ptr = 20;          

    printf("After: num = %d\n", num);

    return 0;
}