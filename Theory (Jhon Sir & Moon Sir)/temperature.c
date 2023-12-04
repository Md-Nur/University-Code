#include <stdio.h>

void main()
{
    float temp;
    printf("Enter the temperature: ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing weather");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("Very cold weather");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold weather");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal in Temp");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("Its hot");
    }
    else
    {
        printf("Its very hot");
    }
}