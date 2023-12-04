// 5+10+20

#include <stdio.h>

void main()
{
    int n, i = 5, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(n>0){
        sum += i;
        i *= 2;
        n--;
    }

    printf("Sum of the series is %d", sum);    
}