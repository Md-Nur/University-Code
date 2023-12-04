#include <stdio.h>

void main()
{
    float a, b, c, X;

    printf("Enter the value of a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (b == c)
    {
        printf("Result is infinity");
        return 1;
    }
    X = a / (b - c);

    printf("X = %.3f", X);
}