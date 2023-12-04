// write a program takes input from board and check whether the number is even or odd

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2)
    {
        printf("%d is an odd number",a);
    }
    else
    {
        printf("%d is an even number",a);
    }
}


