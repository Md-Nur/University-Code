/*
Write a program which can input some words and display the number of upper case letter of each words.
Sample Input:
2
Dhaka
apple
Sample Output:
1
0
*/

#include <stdio.h>

int isUpperCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    return 0;
}

void main()
{
    int n, i, j, count;
    char str[100][100];
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("Enter word %d: ", i + 1);
        gets(str[i]);
    }
    printf("Number of upper case: \n");
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            if (isUpperCase(str[i][j]))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    
}
