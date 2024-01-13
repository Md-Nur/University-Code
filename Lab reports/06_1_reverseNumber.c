// Write a C program to reverse the digit of a number n.
#include <stdio.h>

int main()
{
    int number, result = 0;
    printf("n = ");
    scanf("%d", &number);
    while (number % 10 > 1)
    {
        result = result * 10 + number % 10;
        number = number / 10;
    }
    printf("Reversed = %d", result);
    return 0;
}