// Write a C program which can input the last 7 days temperature of two different cities. Display the highest temperature found in first city or in the second city. [Use appropriate user defined function]

#include <stdio.h>

int maxTemp(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    int city1[n];
    int city2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the temperature of city 1 on day %d: ", i + 1);
        scanf("%d", &city1[i]);
        printf("Enter the temperature of city 2 on day %d: ", i + 1);
        scanf("%d", &city2[i]);
    }
    int max1 = maxTemp(city1, n);
    int max2 = maxTemp(city2, n);
    if (max1 > max2)
    {
        printf("The highest temperature is %d in city 1", max1);
    }
    else
    {
        printf("The highest temperature is %d in city 2", max2);
    }
    return 0;
}
