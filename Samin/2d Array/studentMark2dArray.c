#include <stdio.h>

void main()
{
    int marks[3][4], sum, max;
    float avg;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter marks of student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    // sum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         sum += marks[i][j];
    //     }
    // }

    // avg = sum / 12.0;
    // printf("Avg marks: %f\n\n", avg);

    // for (int i = 0; i < 3; i++)
    // {
    //     sum = 0;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         sum += marks[i][j];
    //     }
    //     avg = sum / 4.0;
    //     printf("Avg marks of student %d: %.2f\n", i + 1, avg);
    // }

    // Finding the max marks
    max = marks[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (marks[i][j] > max)
            {
                max = marks[i][j];
            }
        }
    }
    printf("Max marks: %d\n", max);
}