// Write a C program to calculate the factorial of a given number.

#include <stdio.h>

int main()
{
    int num, i, fact = 1;


    printf("Enter an integer: ");
    
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d = %d", num, fact);
    return 0;
}