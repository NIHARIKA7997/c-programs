#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenateStrings(char **str1, const char *str2) {
    if (*str1 == NULL || str2 == NULL) {
        return NULL;  
    }

     int len1 = strlen(*str1);
    int len2 = strlen(str2);

     *str1 = (char *)realloc(*str1, len1 + len2 + 1);

    if (*str1 == NULL) {
        return NULL; // Return NULL if memory reallocation fails
    }

    strcpy(*str1 + len1, str2);

    return *str1;
}

int main() {
    char *string1 = "Hello, ";  
    const char *string2 = "world!";
    
    if (string1 == NULL) {
        return 1;  
    }

    char *concatenated = concatenateStrings(&string1, string2);

    if (concatenated != NULL) {
        printf("Concatenated: %s\n", concatenated);

        
        free(concatenated);
    } else {
        printf("Failed to concatenate strings.\n");
    }

    free(string1); // Free memory allocated for string1

    return 0;
}
