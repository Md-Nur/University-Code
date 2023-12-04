#include <stdio.h>

void main(){
    int x,y;
    float distance;
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    printf("Enter the y coordinate: ");
    scanf("%d", &y);
    distance = sqrt(x*x + y*y);
    printf("The distance is: %.2f", distance);
}