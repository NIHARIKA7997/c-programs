#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceWordInFile(const char *filename, const char *oldWord, const char *newWord) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return;
    }

    // Create a temporary file to write the modified content
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error: Unable to create a temporary file.\n");
        fclose(file);
        return;
    }

    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        char *pos, *start;
        int index = 0;
        while ((pos = strstr(buffer + index, oldWord)) != NULL) {
            start = buffer + index;
            index = pos - buffer + strlen(oldWord);
            fwrite(start, 1, index-start, tempFile);
            fputs(newWord, tempFile);
        }
        fwrite(buffer + index, 1, strlen(buffer) - index, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    // Replace the original file with the temporary file
    remove(filename);
    rename("temp.txt", filename);
}

int main() {
    const char *filename = "example.txt"; // Replace with your file name
    const char *oldWord = "old_word";    // Replace with the word you want to replace
    const char *newWord = "new_word";    // Replace with the new word

    replaceWordInFile(filename, oldWord, newWord);
    printf("Word replaced in the file.\n");

    return 0;
}