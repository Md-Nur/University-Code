/*
Write a C program which can input some word and change eache vowel by '$' symbol.
Sample Input:
2
Apple
Elephant
Sample Output:
$ppl$
$l$ph$nt
*/
#include <stdio.h>

int isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U')
    {
        return 1;
    }
    return 0;
}

void main()
{
    int n, i, j;
    char str[100][100];
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter word %d: ", i + 1);
        gets(str[i]);
    }
    printf("After changing vowel: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
        {
            printf("%c", isVowel(str[i][j]) ? '$' : str[i][j]);
        }
        printf("\n");
    }
}