#include <stdio.h>

void main(){
    int h,m, ml;
    float hl, angle;
    scanf("%d %d", &h, &m);
    hl = h * 30 + m * 0.5;
    ml = m * 6;

    if (ml>hl)
    {
        angle = ml - hl;
    }
    else
    {
        angle = hl - ml;
    }
    printf("%f", angle);
}