#include<stdio.h>
#include<math.h>
 int main()
{
    double a,b,c,x1,x2,x,d,img,real;
    printf("Enter the value of a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    d=(b*b)-4*a*c;
    if(a==0 && b==0)
        printf("No solution");
    else if(a==0){
        x=-c/b;
    printf("X= %.2lf",x);
    }
    else if(d>=0)
         {
        x1=(-b+sqrt(d))/(2*a);
         x2=(-b-sqrt(d))/(2*a);
         printf("X1=%.2lf\n",x1);
         printf("X2=%.2lf",x2);
    }
    else{
    img=(sqrt(-d))/(2*a);
    real=-b/(2*a);
    printf("X1=%.2lf + %.2lfi\n",real,img);
    printf("X2=%.2lf - %.2lfi",real,img);
    }
    return 0;
}