#include <stdio.h>

void main(){
    int number, power, result = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &power);
    for (int i = 0; i < power; i++)
    {
        result = result * number;
    }
    printf("%d^%d = %d\n", number, power, result);
}