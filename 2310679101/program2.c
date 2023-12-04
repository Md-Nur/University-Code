#include <stdio.h>

void main()
{
    float x1, x2, y1, y2, distance;
    printf("Enter the value of x1,x2,y1,y2: ");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Distance = %.3f", distance);
}