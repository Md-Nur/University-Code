// Write a program to print all prime numbers between m to n. (btween a range)

#include <stdio.h>

int main()
{
    int m, n, i, j, flag;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    printf("Prime numbers between %d and %d are:\n", m, n);
    for (i = m; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}