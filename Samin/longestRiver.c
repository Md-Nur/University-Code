// Write a C program which can input some rivers name, length, and width. Then print the longest river name and its length.

#include <stdio.h>
#include <string.h>

struct river
{
    char name[100];
    int length;
    int width;
};


int main()
{
    int n;
    printf("Enter the number of rivers: ");
    scanf("%d", &n);
    struct river rivers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of river %d: ", i + 1);
        scanf("%s", rivers[i].name);
        printf("Enter the length of river %d: ", i + 1);
        scanf("%d", &rivers[i].length);
        printf("Enter the width of river %d: ", i + 1);
        scanf("%d", &rivers[i].width);
    }
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (rivers[i].length > max)
        {
            max = rivers[i].length;
            index = i;
        }
    }
    printf("The longest river is %s with length %d", rivers[index].name, rivers[index].length);
    return 0;
}
