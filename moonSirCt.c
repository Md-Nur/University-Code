#include <stdio.h>
#include <string.h>

void main()
{
    int len, count;
    char ch, arr[100];
    len = 0;
    count = 0;
    printf("Enter the string: ");
    scanf("%s", arr);
    // puts(arr);
    printf("Enter the character to be searched: ");
    scanf("%c", &ch);
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        len++;
        if (arr[i] == ch)
        {
            count++;
        }
    }
    printf("The length of the string is %d\n", len);
    printf("The number of times %c occurs in the string is %d\n", ch, count);
}
