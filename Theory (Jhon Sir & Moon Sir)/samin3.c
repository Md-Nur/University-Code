#include <stdio.h>

void main()
{
    int numbers[100], divisables[100];
    int length, divisableCount = 0;
    printf("How many numbers: ");
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        divisables[i] = 0;
        for (int j = 1; j < numbers[i]; j++)
        {
            if (numbers[i] % j == 0)
            {
                divisables[i]++;
            }
        }
        }
    printf("Numbers that are divisable more than 5 times: ");
    for (int i = 0; i < length; i++)
    {
        if (divisables[i] >= 5)
        {
            printf("%d ", numbers[i]);
        }
    }
}