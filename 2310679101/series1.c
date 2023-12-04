// 1 + 4 + 7 + 10 + ... + nt value
#include <stdio.h>

void main()
{
    int n, i, sum = 0, term, count = 0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = 3 * i - 2;
        if (term % 7 == 0)
        {

            sum += term;
            count++;
        }
    }
    printf("Sum of the series is %d", sum);
    avg = (float)sum/count;

}