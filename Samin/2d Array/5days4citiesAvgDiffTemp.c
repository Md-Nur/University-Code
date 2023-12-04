/*
Write a C program which can input four cities temperature for last five days and display the average of the difference between the highest and lowest temperature of all cities
Sample Input:
20 27 28 22 30
12 22 12 20 30
22 24 25 33 30
33 30 30 29 30
Sample Output:
7.75
*/
#include <stdio.h>

void main()
{
    int temp[4][5], i, j, max, min, diff, sum = 0;
    float avg;
    printf("Enter temperature of 4 cities for last 5 days: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &temp[i][j]);
        }
    }
    printf("Average of the difference between the highest and lowest temperature of all cities: \n");
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
        sum += diff;
    }
    avg = (float)sum / 4;
    printf("%.2f\n", avg);
}
