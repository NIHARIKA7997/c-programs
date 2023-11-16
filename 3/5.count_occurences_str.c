#include <stdio.h>

int character_occurrence_str(const char *input_str, char ch) {
    if (!input_str || ch == '\0') {
        return 0;
    } else {
        int count = 0;
        for (int i = 0; input_str[i] != '\0'; i++) {
            if (input_str[i] == ch) {
                count++;
            }
        }
        return count;
    }
}

int main() {
    char input_str[100];
    char ch;

    printf("Enter a string: ");
    fgets(input_str, sizeof(input_str), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int result = character_occurrence_str(input_str, ch);
    printf("The character '%c' occurs %d times in the input string.\n", ch, result);

    return 0;
}
