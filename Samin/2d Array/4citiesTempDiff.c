/*
Write a C program which can four cities temperature for last five days and display the difference between the highest and lowest temperature for each city
Sample Input:
20 27 28 22 30
12 22 12 20 30
22 24 25 33 30
33 30 30 29 30
Sample Output:
8
8
11
4
*/

#include <stdio.h>

void main()
{
    int temp[4][5], i, j, max, min, diff;
    printf("Enter temperature of 4 cities for last 5 days: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &temp[i][j]);
        }
    }
    printf("Difference between highest and lowest temperature for each city: \n");
    for (i = 0; i < 4; i++)
    {
        max = temp[i][0];
        min = temp[i][0];
        for (j = 0; j < 5; j++)
        {
            if (temp[i][j] > max)
            {
                max = temp[i][j];
            }
            if (temp[i][j] < min)
            {
                min = temp[i][j];
            }
        }
        diff = max - min;
        printf("%d\n", diff);
    }
}