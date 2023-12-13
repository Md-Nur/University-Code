#include <stdio.h>
#include <string.h>

void main()
{
    char firstName[100], lastName[100], fullName[200];
    printf("Enter your first name:");
    gets(firstName);
    printf("Enter your last name:");
    gets(lastName);

    strcpy(fullName, firstName);

    strcat(fullName, " ");

    strcat(fullName, lastName);

    printf("Your full name is: %s\n", fullName);
    printf("Length of your full name is: %d", strlen(fullName));
}