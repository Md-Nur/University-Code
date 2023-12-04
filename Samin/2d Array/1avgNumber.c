/*
Write a C program which can input five students marks for three subjects and display the average of each student.
Sample Input:
20 27 28
12 22 12
22 24 25
33 30 30
33 30 30
Sample Output:
25
15.33
23.67
31
31
*/

#include <stdio.h>

void main()
{
    int marks[5][3], i, j, sum;
    float avg;
    printf("Enter marks of 5 students for 3 subjects: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    printf("Average of each student: \n");
    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += marks[i][j];
        }
        avg = (float)sum / 3;
        printf("%.2f\n", avg);
    }
}

