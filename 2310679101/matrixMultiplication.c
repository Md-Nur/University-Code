// Calculate the multiplication of two 3X3 matrix

#include <stdio.h>

void main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // take input for matrix1
    printf("Enter the elements of matrix1: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the elements of row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // take input for matrix2
    printf("Enter the elements of matrix2: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the elements of row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // calculate the multiplication of matrix1 and matrix2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print the result
    printf("The result is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
