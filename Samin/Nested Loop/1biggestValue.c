// Write a C program which can input some numbers  and display for each one the the number of value bigger than that in the following list  of numbers.
// As example:
// Input: 5 4 3 4 8 7
// Output: 2 2 3 2 0 0

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
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                count++;
            }
        }
        printf("%d ", count);
    }
    return 0;
}