// 1 + 7 + 13 + 19

#include <stdio.h>

void main(){
    int n, i, sum = 0, term;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = 6 * i - 5;
        sum += term;
    }
    printf("Sum of the series is %d", sum);
}