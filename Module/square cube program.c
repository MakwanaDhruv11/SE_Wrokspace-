#include <stdio.h>

int main()
{
    int num;
    int square, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    cube   = num * num * num;
    
    printf("Square of %d = %d\n", num, square);
    printf("Cube of %d = %d\n", num, cube);

    return 0;
}
