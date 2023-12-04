// Write a c programm to merge two arrays
#include <stdio.h>

void main()
{
    int a[100] = {5, 2, 7, 12, 9};
    int b[] = {1, 3, 7};
    int i, j;
    printf("a[]=");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("b[]=");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    for (i = 5, j = 0; i < 8, j < 3; i++, j++)
    {
        a[i] = b[j];

    }
    printf("a[]=");
    for (i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }
}