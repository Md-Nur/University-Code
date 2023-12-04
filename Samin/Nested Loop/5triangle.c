/*
Write a c program which can display the folwing pattern using nested loop.
?
??
???
????

*/ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("?");
        }
        printf("\n");
    }
    return 0;
}
