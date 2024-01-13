#include <stdio.h>

int main()
{
    int arr[10], result;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = arr[0];

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                result = arr[i];
            }
        }
    }

    printf("%d", result);

    return 0;
}