// Write a C program to find LCM of two numbers.

#include <stdio.h>

int main()
{
    int num1, num2, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    lcm = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            printf("LCM of %d and %d is %d", num1, num2, lcm);
            break;
        }
        lcm++;
    }
    return 0;
}