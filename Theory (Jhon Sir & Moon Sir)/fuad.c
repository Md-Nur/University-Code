#include <stdio.h>

void main()
{
    int a[] = {5, 2, 7, 12, 9};
    int b[] = {1, 3, 7};
    int len_a = sizeof(a) / sizeof(a[0]);
    int len_a_b = len_a + (sizeof(b) / sizeof(b[0]));
    for (int i = (len_a); i < len_a_b; i++)
    {
        a[i] = b[i - len_a];
    }
    for (int j = 0; j < len_a_b; j++)
    {
        printf("%d ", a[j]);
    }
}