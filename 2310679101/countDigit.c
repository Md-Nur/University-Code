// Write a C program to count number of digits in an integer.
#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}