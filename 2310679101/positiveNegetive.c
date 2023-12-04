// Write a c programing that takes a input from user and check whether is positive negative or zero

// #include <stdio.h>

void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("%d is zero");
    }
    else if (a < 0)
    {
        printf("%d is a negetive number", a);
    }
    else
    {
        printf("%d is a positive number", a);
    }
}
