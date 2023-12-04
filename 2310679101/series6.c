#include <stdio.h>

void main()
{
    int n;
    float x, y;
    printf("Enter the values of x and n : ");
    scanf("%f %d", &x, &n);
    y = 1.0;
    /* LOOP BEGINs */
    for (int count = 1; count <= n; ++count) /* Testing */
    {
        y = y * x;
    }
    /* END OF LOOP */
    printf("\nx = %f; n = %d; x to power n = %f\n", x, n, y);
}