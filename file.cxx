#include <stdio.h>
int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("text2.txt", "r");

    // Store the content of the file
    char myString[100];

    // Read the content and store it inside myString
    while (fgets(myString, 100, fptr))
    {
        // Print the file content
        printf("%s", myString);
    }
    // Close the file
    fclose(fptr);
}