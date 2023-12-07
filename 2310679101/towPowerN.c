// WAP that can calculate 2^n & 2^-n

#include <stdio.h>

void main()
{
    int n, i = 0, y = 1;
    float z;
    printf("Enter the value on n: ");
    scanf("%d", &n);
    while (i < n)
    {
        y *= 2;
        i++;
    }
    z = 1.0 / y;
    printf("2^%d=%d\n2^-%d=%.3f\n", n, y, n, z);
}