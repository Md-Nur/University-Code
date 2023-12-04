#include <stdio.h>

void main()
{
    int numbers[100], count, sumOfPositive = 0, sumOfNegetive = 0;
    printf("How many numbers: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0)
        {
            sumOfPositive += numbers[i];
        }
        else if (numbers[i] < 0)
        {
            sumOfNegetive += numbers[i];
        }
    }
    printf("Sum of positive numbers: %d\n", sumOfPositive);
    printf("Sum of negetive numbers: %d\n", sumOfNegetive);
}