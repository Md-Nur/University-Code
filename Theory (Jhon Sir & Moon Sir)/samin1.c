#include <stdio.h>

void main()
{

    int numberOfNephewsNieces = 8;
    int broSis = 5;
    int chocholate;
    printf("Enter the number of chocholate: ");
    scanf("%d", &chocholate);
    broSis += chocholate % numberOfNephewsNieces;
    printf("Tasfin's Brother and Sister will get %d chocholate\n", broSis);
}