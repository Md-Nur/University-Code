#include <stdio.h>

void main()
{
    long int p;
    int n = 0;
    double q;
    printf(" 2 to power n n 2 to power -n\n");
    p = 1;
    while (n < 21) /* LOOP BEGINS */
    {
        if (n == 0)
            p = 1;
        else
            p = p * 2;
        q = 1.0 / (double)p;
        printf("%10ld %10d %20.12lf\n", p, n, q);

        n++;
    } /* LOOP ENDS */
}