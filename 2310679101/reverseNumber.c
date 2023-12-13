// Write a C program to find reverse of its number.

#include <stdio.h>

int main()
{
    int num, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    printf("Reverse of the number: %d", reverse);
    return 0;
}