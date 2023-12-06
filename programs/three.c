#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("my.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL)
    {
        printf("File doesn't exist or couldn't be opened.\n");
        return 1; // Exit the program with an error code
    }

    // Read and display the contents of the file
    printf("Contents of the file:\n");

    int ch; // Change char to int to handle EOF correctly

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    // Close the file
    fclose(fptr);

    return 0; // Exit the program successfully
}
