#include <stdio.h>

void main()
{
    int a, b, c;
    float x1, x2, discriminant;
    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant >= 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are %f and %f", x1, x2);
    }
    else
    {
        printf("X1 = %d + %d i\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
        printf("X2 = %d - %d i\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
    }
}