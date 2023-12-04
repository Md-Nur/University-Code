// write a program takes input from board and check wheter the number is even or odd 

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}