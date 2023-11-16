#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[] = "source.txt";
    char destinationFileName[] = "destination.txt";
    char ch;

     sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

     destinationFile = fopen(destinationFileName, "a");

    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

     while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents appended successfully.\n");

    return 0;
}
