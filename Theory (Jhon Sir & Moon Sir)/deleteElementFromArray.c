#include <stdio.h>

void main()
{
    int arr[100], n, index;
    printf("How many elements do you want to enter? ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Please enter the location of the element you want to delete: ");
    scanf("%d", &index);

    for (int i = index; i < (n - 1); i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        printf("%d ", arr[i]);
    }
}