#include <stdio.h>

/*
void main(){
    int a,b,temp;
    printf("Enter two value: ");
    scanf("%d %d", &a,&b);
    printf("Before swap:\na = %d\tb = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap:\na = %d\tb = %d\n",a,b);

}
*/

void main()
{

    int a, b;
    printf("Enter two value: ");
    scanf("%d %d", &a, &b);
    printf("Before swap:\na = %d\tb = %d\n", a, b); // Before swaping the values

    a = a + b;                                     // a = sum
    b = a - b;                                     // b = sum - b => b = a+b-b => b = a
    a = a - b;                                     // a = sum - b => a = a+b-a => a = b
    printf("After swap:\na = %d\tb = %d\n", a, b); // After swaping the values
}
