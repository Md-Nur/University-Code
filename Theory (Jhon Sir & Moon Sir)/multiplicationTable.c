#include <stdio.h>

void main()
{

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", number, i + 1, number * (i + 1));
    }
}