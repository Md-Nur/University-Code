// y = x^n

#include <stdio.h>

void main()
{
    int x, n, i, y = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        y *= x;
    }

    printf("y = %d", y);
}