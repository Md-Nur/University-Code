// Write a program in C to print all the unique elemnts in a array
#include <stdio.h>

int main()
{
    int arr[7];
    int n = sizeof(arr) / sizeof(arr[0]);
    int deleteIndex[7], m = 0;
    printf("a[] = {");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("}\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                deleteIndex[m] = i;
                deleteIndex[m + 1] = j;
                m += 2;
            }
        }
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int isShow = 1;
        for (int j = 0; j <= m; j++)
        {
            if (i == deleteIndex[j])
            {

                isShow = 0;
            }
        }
        if (isShow)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}