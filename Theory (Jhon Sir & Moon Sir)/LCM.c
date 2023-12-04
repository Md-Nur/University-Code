/* Write a C function to determine the LCM of given two integers.
 Write a complete C program to determine the LCM of any set of
 integers using this function. */

#include <stdio.h>

int lcm(int a, int b);

int main()
{
    int n, a, b;
    printf("How many integers do you want to find the LCM of?: ");
    scanf("%d", &n);
    printf("Enter the integers: ");
    scanf("%d %d", &a, &b);
    int l = lcm(a, b);
    for (int i = 2; i < n; i++)
    {
        scanf("%d", &a);
        l = lcm(l, a);
    }
    printf("The LCM is %d\n", l);
    return 0;
}

int lcm(int a, int b)
{
    int i = 1;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
        i++;
    }
}
