/* Write a function in C language to sort of a list integers; the order of sorting
(i.e. ascending or descending) will be passed to the function as argument.*/

#include <stdio.h>

void sort(int *arr, int size, int order);

int main()
{
    int size, order;
    size = 10;
    int arr[10];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the order of sorting (1 for ascending, 0 for descending): ");
    scanf("%d", &order);
    sort(arr, size, order);
    printf("The sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void sort(int *arr, int size, int order)
{
    int temp;
    if (order == 1)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
}
