/*
Write a C program which can input some player weights and display how many two players team can be formed where both of the players weight is more than 80.
As example:
Input: 5484 63 8988
Output: 3
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count = 0;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the weights: ");
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
            if (arr[j] + arr[i] > 160)
            {
                count++;
            }
        }
        printf("%d ", count);
    }
    return 0;
}