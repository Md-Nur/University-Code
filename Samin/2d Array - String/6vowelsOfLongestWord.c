/*
Write a program which can input some whords and display the all the vowels of the longest word.
Sample Input:
3
Bangladesh
India
Pakistan
Sample Output:
aae
*/
#include <stdio.h>

void main()
{
    int n, i, j, max = 0, len, posOfLongestWord = 0;
    char str[100][100];
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter word %d: ", i + 1);
        gets(str[i]);
    }
    // Finding the longest word
    for (i = 0; i < n; i++)
    {
        len = 0;
        for (j = 0; str[i][j] != '\0'; j++)
        {
            len++;
        }
        if (len > max)
        {
            max = len;
            posOfLongestWord = i;
        }
    }

    // Printing the vowels of the longest word
    printf("Vowels of the longest word: \n");

    for (j = 0; str[posOfLongestWord][j] != '\0'; j++)
    {
        char ch = str[posOfLongestWord][j];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c", ch);
        }
    }
}
