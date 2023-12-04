/*
Write a C program which can five student marks in three courses and display wheater student pass in all courses (60 is pass mark).
Sample Input:
60 70 80
40 50 60
80 85 50
90 90 93
80 80 80
Sample Output:
Yes
No
No
Yes
Yes
*/

#include <stdio.h>

void main()
{
    int marks[5][3], i, j, sum, pass;
    float avg;
    printf("Enter marks of 5 students for 3 subjects: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    printf("Pass or fail: \n");
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (marks[i][j] >= 60)
            {
                pass = 1;
            }
            else
            {
                pass = 0;
                break;
            }
        }
        if (pass)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        }
}