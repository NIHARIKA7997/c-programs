#include <stdio.h>
#include <stdlib.h>

char *duplicateString(const char *source) {
    if (source == NULL) {
        return NULL; 
    }

    int length = 0;
    while (source[length] != '\0') {
        length++;
    }

    char *duplicate = (char *)malloc(length + 1);

    if (duplicate == NULL) {
        return NULL; 
    }

    for (int i = 0; i < length; i++) {
        duplicate[i] = source[i];
    }

    duplicate[length] = '\0';

    return duplicate;
}

int main() {
    const char *original = "Hello, world!";
    char *copy = duplicateString(original);

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);

        free(copy);
    } else {
        printf("Failed to duplicate the string.\n");
    }

    return 0;
}
