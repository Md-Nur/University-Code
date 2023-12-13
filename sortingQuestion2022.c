#include <stdio.h>

int minNum(int num1, int num2);

void main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
// 56, 54, 7, 55,45, 6, 4, 3, 2, 1
    for (int j = 0; j < 10; j++)
    {
        for (int k = j + 1; k < 10; k++)
        {
            if (minNum(arr[j], arr[k]) == arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for (int a = 0; a < 10; a++)
    {
        printf("%d ", arr[a]);
    }
}

int minNum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}