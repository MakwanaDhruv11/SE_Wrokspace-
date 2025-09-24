#include <stdio.h>

int main() 
{
    float a, b, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &a);

    printf("Enter the height of the triangle: ");
    scanf("%f", &b);

    area = 0.5 * a * b;
    
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
