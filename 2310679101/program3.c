#include <stdio.h>

void main()
{
    int numberOfBoys, numberOfGirls;
    printf("Enter the number of Boys and Girls: ");
    scanf("%d %d", &numberOfBoys, &numberOfGirls);
    float ratio;
    ratio = (float)numberOfBoys / numberOfGirls;

    printf("The ratio of Boys and Girls= 1:%f", ratio);
}
