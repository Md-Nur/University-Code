#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    char book_name[100];
    char author_name[100];
    char category[50];
    int quantity, rack;
    float cost;
};

int main()
{
    struct library lib[100];
    int i, j, count;
    char delete_book[100];

    i = 0;
    j = 0;
    count = 0;

    FILE *file;
    file = fopen("library_details.txt", "a+"); // Open file for append and read

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    while (j != 8)
    {
        printf("\n\n1. Add Book details\n");
        printf("2. Display the list of books and its details\n");
        printf("3. Display the total no. of books in the library\n");
        printf("4. Search:\n");
        printf("5. Delete a book\n");
        printf("6. Timeline and Guideline of the library\n");
        printf("7. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &j);

        switch (j)
        {
        case 1:
            printf("\nYou can add the details of the book\n");
            printf("Enter the book name: ");
            scanf(" %[^\n]s", lib[i].book_name);
            printf("Enter the author name: ");
            scanf(" %[^\n]s", lib[i].author_name);
            printf("Enter the category of the book: ");
            scanf(" %[^\n]s", lib[i].category);
            printf("Enter quantity: ");
            scanf("%d", &lib[i].quantity);
            printf("Enter the cost of the book: ");
            scanf("%f", &lib[i].cost);
            printf("Enter the rack no. of the book: ");
            scanf("%d", &lib[i].rack);
            count++;
            i++;
            printf("\n\nBook added succesfully.");
            break;

        case 2:
            if (count == 0)
            {
                printf("\nThere are no books stored!!\n\n");
            }
            else
            {
                printf("\nYou can view the list of books\n");
                printf("The list of books are: \n");
                for (i = 0; i < count; i++)
                {
                    printf("Book name: %s\n", lib[i].book_name);
                    printf("Author name: %s\n", lib[i].author_name);
                    printf("Category: %s\n", lib[i].category);
                    printf("Cost: %.2f\n", lib[i].cost);
                    printf("Quantity: %d\n", lib[i].quantity);
                    printf("Rack: %d\n\n", lib[i].rack);
                }
            }
            break;

        case 3:
            printf("\nTotal number of books in the library are: %d\n\n", count);
            break;

        case 4:
            printf("\n Search:\n");
            if (count == 0)
            {
                printf("\nThere are no books stored!!\n\n");
            }
            else
            {
                char search_category[50];
                printf("\nEnter the category to display: ");
                scanf("%s", search_category);

                printf("\nBooks in the category '%s' are: \n", search_category);
                for (i = 0; i < count; i++)
                {
                    if (strcmp(lib[i].category, search_category) == 0)
                    {
                        printf("Book name: %s\n", lib[i].book_name);
                        printf("Author name: %s\n", lib[i].author_name);
                        printf("Category: %s\n", lib[i].category);
                        printf("Cost: %.2f\n", lib[i].cost);
                        printf("Quantity: %d\n", lib[i].quantity);
                        printf("Rack: %d\n\n", lib[i].rack);
                    }
                }
            }
            break;
        case 5:
            if (count == 0)
            {
                printf("\nThere are no books stored!!\n\n");
            }
            else
            {
                printf("\nEnter the name of the book to delete: ");
                scanf(" %[^\n]s", delete_book);

                int found = 0;
                for (i = 0; i < count; i++)
                {
                    if (strcmp(lib[i].book_name, delete_book) == 0)
                    {
                        found = 1;
                        printf("\nBook '%s' deleted successfully.\n", lib[i].book_name);
                        for (int k = i; k < count - 1; k++)
                        {
                            strcpy(lib[k].book_name, lib[k + 1].book_name);
                            strcpy(lib[k].author_name, lib[k + 1].author_name);
                            strcpy(lib[k].category, lib[k + 1].category);
                            lib[k].rack = lib[k + 1].rack;
                            lib[k].quantity = lib[k + 1].quantity;
                        }
                        count--;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("\nBook not found!\n");
                }
            }
            break;
        case 6:
            printf("TIMELINE OF LIBRARY AND GENERAL INSTRUCTIONS AND LIBRARY RULES FOR USERS \n\n");
            printf("Library starts at 9 A.M. and Closes at 9 P.M.\n\n");
            printf("                                       ENTRANCE RULES\n\n");
            printf("1. The Library is open to all who have a valid Identity card (ID card) treated as Library membership card which must be shown at the entrance or inside the library, if require. Who does not possess any of these is not allowed to receive any library facilities.\n\n");
            printf("2.  Silence is to be strictly maintained in the Library.\n\n");
            printf("3.  Seats and computer terminals of the library are not reserved.\n\n");
            printf("4.  One computer for one user only, maximum using period 30 minutes at a time.\n\n");
            printf("5.  The library is a place for self study; users’ behavior should reflect this and they should respect the needs of others.\n\n");
            printf("6.  Persons using the library shall abstain from any kind of discussions or group study and any other form of noise is not allowed inside the Library.\n\n");
            printf("7.  The consumption of foods and drinks and the use of personal audio/video equipments are not permitted in the library.\n\n");
            printf("8.  Personal books/spiral bindings/envelops/any kind of files/file covers/ are not allowed inside the library.\n\n");
            printf("9.  Mobile phones should be switched off inside the library. Failure to comply with these requirements may result in a fine and/or expulsion from the Library.\n\n");
            printf("10.  Users who have been found guilty of misconduct, or who interfere with the comfort of others, make excessive noise, cause damage in the library, and disfigure or   mutilate any library material  in any way in the opinion of the library personnel, may be excluded for the remainder of that day and shall compensate the university for any damage caused.\n\n");
            printf("11.  Exercise khata, pens, pencil, rubber, geometric boxes, and calculators, loose pages etc. are allowed inside the library.\n\n");
            printf("12. The library has no accountability in case of damage or theft of personal belongings left unattended in side the library.");
            break;
        case 7:
            fclose(file);
            exit(0);
            break;
        default:;
            // Code to read books from a file
            FILE *readFile = fopen("library.txt", "r"); // Open the file in read mode

            if (readFile != NULL)
            {
                // Read each line and extract book details
                while (fscanf(readFile, " %[^\n]", delete_book) != EOF)
                {
                    // Parse the line to extract book information
                    // Assuming the format is: book_name,author_name,category,rack,quantity
                    scanf(delete_book, "%[^,],%[^,],%[^,],%d,%d", lib[count].book_name, lib[count].author_name, lib[count].category, &lib[count].rack, &lib[count].quantity);
                    count++; // Increment the book count
                }
                fclose(readFile); // Close the file
            }
            else
            {
                printf("No books found or error opening file for reading.\n");
            }
            printf("\nInvalid number entered\n\n");
            break;
        }
    }
    return 0;
}