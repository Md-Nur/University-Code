// Write a C program which can input some books name, author name, and price. Display the book's information which's name contains highest number of vowels.

#include <stdio.h>
#include <string.h>

struct book
{
    char name[100];
    char author[100];
    int price;
};

int main()
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct book books[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of book %d: ", i + 1);
        scanf("%s", books[i].name);
        printf("Enter the author of book %d: ", i + 1);
        scanf("%s", books[i].author);
        printf("Enter the price of book %d: ", i + 1);
        scanf("%d", &books[i].price);
    }
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(books[i].name); j++)
        {
            if (books[i].name[j] == 'a' || books[i].name[j] == 'e' || books[i].name[j] == 'i' || books[i].name[j] == 'o' || books[i].name[j] == 'u')
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            index = i;
        }
    }
    printf("The book with highest number of vowels is %s with %d vowels", books[index].name, max);
    return 0;
}
