#include <stdio.h>

void main(){
    int numberOfCupons;
    printf("Enter the number of books: ");
    scanf("%d", &numberOfCupons);
    printf("Chocholate = %d\nGum = %d\n", numberOfCupons/3, numberOfCupons%3);
}