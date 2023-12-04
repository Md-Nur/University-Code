#include <stdio.h>

int power(int value, int p) // This function will calculate the exponential value and return the result
{
    int result = value;
    for (int i = 1; i < p; i++)
    {
        result = result * value;
    }
    return result;
}

void main()
{
    int n, a = 1, sum = 0, x; // a is the value of the power and n is the number of the pod in the series
    printf("Enter the last number and the value of x: ");
    scanf("%d %d", &n, &x); // taking the value of nth number and the x value
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * power(x, a);
        a += 2;
    }

    // wrie a function of two add numbers
    
    printf("The sum of the serise: %d", sum);
}