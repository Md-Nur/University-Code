
#include <stdio.h>

void main()
{
    int arr[10], n, count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] * arr[i + 1] < 0)
        {
            count++;
        }
    }
    printf("The number of times the sign changes = %d", count);
}