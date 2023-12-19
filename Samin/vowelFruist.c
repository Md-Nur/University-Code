// Write a C program which can input some fruits name, price, typical lowest wight, typical highest wight. Display all the fruits informations which's name start with a vowel.

#include <stdio.h>
#include <string.h>

struct fruit
{
    char name[100];
    int price;
    int lowestWeight;
    int highestWeight;
};

int main()
{
    int n;
    printf("Enter the number of fruits: ");
    scanf("%d", &n);
    struct fruit fruits[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of fruit %d: ", i + 1);
        scanf("%s", fruits[i].name);
        printf("Enter the price of fruit %d: ", i + 1);
        scanf("%d", &fruits[i].price);
        printf("Enter the lowest weight of fruit %d: ", i + 1);
        scanf("%d", &fruits[i].lowestWeight);
        printf("Enter the highest weight of fruit %d: ", i + 1);
        scanf("%d", &fruits[i].highestWeight);
    }
    for (int i = 0; i < n; i++)
    {
        if (fruits[i].name[0] == 'a' || fruits[i].name[0] == 'e' || fruits[i].name[0] == 'i' || fruits[i].name[0] == 'o' || fruits[i].name[0] == 'u')
        {
            printf("The fruit %s has price %d, lowest weight %d, highest weight %d\n", fruits[i].name, fruits[i].price, fruits[i].lowestWeight, fruits[i].highestWeight);
        }
    }
    return 0;
}
