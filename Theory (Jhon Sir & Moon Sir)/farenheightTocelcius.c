#include <stdio.h>

void main(){
    float farenheit,celcuis;
    printf("Enter the farenheit value: ");
    scanf("%f",&farenheit);
    celcuis = (5.0/9.0)*(farenheit-32);
    printf("Celecuis = %.3f",celcuis);

}