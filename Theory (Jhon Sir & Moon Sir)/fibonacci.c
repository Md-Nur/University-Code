#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter the length of the fibonacci series: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        sum += a;
    }
    printf("\nSum of fibonacci series: %d\n", sum);
}