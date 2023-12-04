#include <stdio.h>

void main()
{
    int seconds, minutes, hours;
    printf("Enter the seconds: ");
    scanf("%d", &seconds);
    minutes = seconds / 60;
    hours = minutes / 60;
    seconds = seconds % 60;
    minutes = minutes % 60;
    printf("The time is %d:%d:%d", hours, minutes, seconds);
}