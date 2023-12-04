#include <stdio.h>


int main()
{
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file in read mode
    inputFile = fopen("text.txt", "r");

    // Check if the input file exists
    if (inputFile == NULL)
    {
        printf("Error opening input file.\n");
        return 1; // Exit the program with an error code
    }

    // Open the output file in write mode
    outputFile = fopen("vowel.txt", "w");

    // Check if the output file is created successfully
    if (outputFile == NULL)
    {
        printf("Error creating output file.\n");
        fclose(inputFile); // Close the input file before exiting
        return 1; // Exit the program with an error code
    }

    // Read characters from the input file
    while ((ch = fgetc(inputFile)) != EOF)
    {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            // Write the vowel to the output file
            fputc(ch, outputFile);
        }
    }

    // Close the input and output files
    fclose(inputFile);
    fclose(outputFile);

    printf("Vowels extracted and written to vowel.txt successfully.\n");

    return 0; // Exit the program successfully
}
