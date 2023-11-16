#include <stdio.h>
#include <stdlib.h>

char *concatenateStrings(const char *str1, const char *str2) {
    if (str1 == NULL || str2 == NULL) {
        return NULL; // Return NULL if either input string is NULL
    }

    // Calculate the lengths of the input strings
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    // Allocate memory for the result string, including space for the null terminator
    char *result = (char *)malloc(len1 + len2 + 1);

    if (result == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    // Copy characters from the first string to the result
    int i;
    for (i = 0; i < len1; i++) {
        result[i] = str1[i];
    }

    // Copy characters from the second string to the result
    for (int j = 0; j < len2; j++) {
        result[i] = str2[j];
        i++;
    }

    // Add the null terminator
    result[len1 + len2] = '\0';

    return result;
}

int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "world!";
    
    char *concatenated = concatenateStrings(string1, string2);

    if (concatenated != NULL) {
        printf("Concatenated: %s\n", concatenated);

        // Don't forget to free the allocated memory when you're done with it
        free(concatenated);
    } else {
        printf("Failed to concatenate strings.\n");
    }

    return 0;
}
