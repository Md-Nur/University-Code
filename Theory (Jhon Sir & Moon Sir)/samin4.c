#include <stdio.h>

void main()
{
    int numbers[100], con[100], count;
    printf("How many numbers: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Consicutive numbers are: ");

    for (int i = 0; i < count; i++)
    {

        for (int j = 1; j < numbers[i]; j++)
        {
            if (numbers[i] % j == 0 && numbers[i] % (j + 1) == 0)
            {
                printf("%d ", numbers[i]);
                break;
            }
        }
    }
}