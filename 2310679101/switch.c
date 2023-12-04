/*
f(x) =   1, x>0
        -1, x<0
         0, otherwise
f(x) =   1, x>0
        -1, x<0
         0, otherwise
*/

#include <stdio.h>

int main()
{
    int x, fx;
    printf("Enther the value of x: ");
    scanf("%d", &x);

    switch (x)
    {
    case 0:
        fx = 2 * x + 1;
        break;
    case 1:
        fx = 2 * x - 1;
        break;
    default:
        fx = 0;
        break;
    }
    printf("f(x) = %d\n", fx);
}