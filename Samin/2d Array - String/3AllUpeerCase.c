/*
Write a C program which can input some words and display the all the letter of each words in upper case.
Sample Input:
2
Dhaka
apple
Sample Output:
DHAKA
APPLE
*/

#include <stdio.h>

char upperCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    return ch;
}

void main()
{
    int n, i;
    char str[100][100];
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("Enter word %d: ", i + 1);
        gets(str[i]);
    }
    printf("All upper case: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            printf("%c", upperCase(str[i][j]));
        }
        printf("\n");
    }

    
}
