#include <stdio.h>
#include <math.h>

void main()
{
    double a, b, c, d, x1, x2;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);
    d = b * b - 4 * a * c;
    if (a == 0 && b == 0)
    {
        printf("No solution");
    }
    else if (a == 0)
    {
        x1 = -c / b;
        printf("There is only one root = %lf", x1);
    }

    else if (d < 0)
    {
        printf("X1 = %.2lf + %.2lf i\n", -b / (2 * a), sqrt(-d) / (2 * a));
        printf("X2 = %.2lf - %.2lf i\n", -b / (2 * a), sqrt(-d) / (2 * a));
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2.0 * a);
        x2 = (-b - sqrt(d)) / (2.0 * a);
        printf("The roots are %.2lf and %.2lf", x1, x2);
    }
}
