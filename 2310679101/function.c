#include <stdio.h>

int f(int a, int b)
{
    int sum = 0;
    if (a >= b)
    {
        sum += 1 + f(a - b, b);
    }
    else
    {
        return sum;
    }
}
void main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("The value of f(%d, %d) = %d", a, b, f(a, b));
}