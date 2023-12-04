#include <stdio.h>

void main()
{
    int marks[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Give marks of %d no sub: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("Total = %d\nAverage = %d", sum, (sum / 5));
}