/*
Write a C program which can input some words and display how many of those start with vowles.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count = 0;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    char arr[n][100];
    printf("Enter the words: ");
    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
    printf("The output is: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i][0] == 'a' || arr[i][0] == 'e' || arr[i][0] == 'i' || arr[i][0] == 'o' || arr[i][0] == 'u' || arr[i][0] == 'A' || arr[i][0] == 'E' || arr[i][0] == 'I' || arr[i][0] == 'O' || arr[i][0] == 'U')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}