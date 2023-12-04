/*
Write a C program which can input a senctence and display the first letter of each words in upper case.
Sample Input:
This is Bangladesh
Sample Output:
T
I
B
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
    char str[100];
    int i;
    printf("Enter a sentence: ");
    gets(str);
    printf("First letter of each word: \n");
    printf("%c\n", str[0]);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            printf("%c\n", upperCase(str[i + 1]));
        }
    }
}