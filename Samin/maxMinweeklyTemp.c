// Write a C program which can input the last 7 days temperature of tow different cities. Display the difference between highest and average temperature each city. Display difference between lowest and average temperature each city. Display difference between higest and lowest temperature each city. [Use appropriate user defined function]

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

int minTemp(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int avgTemp(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
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
    printf("The difference between highest and average temperature of city 1 is %d\n", maxTemp(city1, n) - avgTemp(city1, n));
    printf("The difference between highest and average temperature of city 2 is %d\n", maxTemp(city2, n) - avgTemp(city2, n));
    printf("The difference between lowest and average temperature of city 1 is %d\n", minTemp(city1, n) - avgTemp(city1, n));
    printf("The difference between lowest and average temperature of city 2 is %d\n", minTemp(city2, n) - avgTemp(city2, n));
    printf("The difference between highest and lowest temperature of city 1 is %d\n", maxTemp(city1, n) - minTemp(city1, n));
    printf("The difference between highest and lowest temperature of city 2 is %d\n", maxTemp(city2, n) - minTemp(city2, n));
    return 0;
}