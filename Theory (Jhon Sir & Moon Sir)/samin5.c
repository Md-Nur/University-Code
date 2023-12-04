#include <stdio.h>

void main()
{
    int m, n, trips = 0;
    printf("Enter the max number of people that accomodate in the lift: ");
    scanf("%d", &m);
    printf("Enter the number of people in the queue: ");
    scanf("%d", &n);
    if (n % m == 0)
    {
        trips = n / m;
    }
    else
    {
        trips = n / m + 1;
    }

    printf("The number of trips required to take them all to the top floor is %d\n", trips);
}