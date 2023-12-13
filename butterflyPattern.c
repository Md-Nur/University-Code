#include <stdio.h>

void main()
{
    int col;
    printf("Enter the number of cols: ");
    scanf("%d", &col);

for (int i = 0; i < col; i++)
{
    for (int j = 0; j < 2*col; j++)
    {
       if(j <=i || 2*col-j <= i+1)
       {
           printf("*");
       }
       else
       {
           printf(" ");
       }
    }
    printf("\n");
    
}
for (int i = col-1; i >= 0; i--)
{
    for (int j = 0; j < 2*col; j++)
    {
       if(j <=i || 2*col-j <= i+1)
       {
           printf("*");
       }
       else
       {
           printf(" ");
       }
    }
    printf("\n");
    
}

}