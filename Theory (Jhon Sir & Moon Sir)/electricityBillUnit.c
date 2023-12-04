#include <stdio.h>

void main()
{
    int unit;
    float bill;
    printf("Enter the unit: ");
    scanf("%d", &unit);
    if (unit <= 100 && unit > 0)
    {
        bill = unit * 4;
    }
    else if (unit <= 250)
    {
        bill = 5* (unit - 100) + 100*4;
    }
    else
    {
        bill = 7* (unit - 250) + 150*5 + 100*4;
    }
    printf("The bill is: %.2f taka", bill);
}