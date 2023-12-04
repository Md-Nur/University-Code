/*
Write a C program which can input four cities temperature for last fice days and display in how many days the temperature of each city was higher than the previous day
Sample Input:
20 27 28 22 20
12 22 12 20 20
22 24 25 33 20
33 30 30 29 20
Sample Output:
2
2
3
0
*/

#include <stdio.h>

void main()
{
    int temp[4][5], i, j, count;
    printf("Enter temperature of 4 cities for last 5 days: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &temp[i][j]);
        }
    }
    printf("Number of days the temperature of each city was higher than the previous day: \n");
    for (i = 0; i < 4; i++)
    {
        count = 0;
        for (j = 0; j < 4; j++)
        {
            if (temp[i][j] < temp[i][j + 1])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}
