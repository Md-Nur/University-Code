#include <stdio.h>

void main(){
    float celcius, farenheit;
    printf("Enter the value of celcius: ");
    scanf("%f",&celcius);

    farenheit = ((9.0/5.0)*celcius)+32;
    printf("Farenheit = %.2f", farenheit);
}