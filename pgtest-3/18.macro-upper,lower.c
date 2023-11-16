#include <stdio.h>

#define IS_LOWER_CASE(c) ((c >= 'a' && c <= 'z'))
#define IS_UPPER_CASE(c) ((c >= 'A' && c <= 'Z'))

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (IS_LOWER_CASE(character)) {
        printf("%c is a lowercase letter.\n", character);
    } else if (IS_UPPER_CASE(character)) {
        printf("%c is an uppercase letter.\n", character);
    } else {
        printf("%c is not a letter.\n", character);
    }

    return 0;
}