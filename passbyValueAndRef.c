#include <stdio.h>

void func1(int a)
{
    printf("passing by vaule is: %d\n", a);
}

void func2(int *a)
{
    printf("passing by reference in function is: %d\n", *a);
}

void main()
{
    int num1;
    scanf("%d", &num1);
    func1(num1);
    func2(&num1);
}