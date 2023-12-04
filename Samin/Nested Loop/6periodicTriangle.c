/*
Write a c program which can display the folwing pattern using nested loop.
?
**
???
****
?????
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
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(i % 2 == 0 ? "*" : "?");
        }
        printf("\n");
    }
    return 0;
}
