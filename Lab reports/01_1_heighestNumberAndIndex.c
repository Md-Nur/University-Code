#include <stdio.h>

int main()
{
    int arr[8], index = 0, max;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < 8; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }

    printf("Heighest: %d\tIndex: %d", max, index);

    return 0;
}