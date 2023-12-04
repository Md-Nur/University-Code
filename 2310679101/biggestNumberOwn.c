#include <stdio.h>

void main()
{
    int a, b, c, max;

    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("The biggest number is %d", max);
}