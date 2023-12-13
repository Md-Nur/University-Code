// Write a C program to print all prime numbers between 1 to n

#include <stdio.h>

int main()
{
    int n, i, j, flag;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 to %d are:\n", n);
    for (i = 2; i <= n; i++)
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