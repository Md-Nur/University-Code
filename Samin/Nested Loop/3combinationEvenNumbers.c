/*
Write A c program which can input some numbers and in an array and display how many pair are possible where both numbres are even. For example,
Input: 5 4 8 7 6
Output: 3
[4 and 8, 4 and 6, 8 and 6]
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The output is: ");
    count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] % 2 == 0 && arr[i] % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
