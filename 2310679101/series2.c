// 2+4+6+.......nt

#include <stdio.h>

void main(){
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 2*i;
    }
    printf("Sum of the series is %d", sum);
}