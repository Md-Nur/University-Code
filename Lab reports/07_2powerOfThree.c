#include <stdio.h>

int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    while (a >= 3)
    {
        a = a / 3;
    }
    if (a == 1.00)
    {
        printf("Power of 3\n");
    }
    else
    {
        printf("Not power of 3\n");
    }
    return 0;
}