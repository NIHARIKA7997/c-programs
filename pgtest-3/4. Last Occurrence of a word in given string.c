#include <stdio.h>

 void removeLastOccurrence(char *str, const char *word) {
    int len_str = 0, len_word = 0;
    int last_occurrence = -1;

     while (str[len_str] != '\0') {
        len_str++;
    }

    while (word[len_word] != '\0') {
        len_word++;
    }

     for (int i = 0; i < len_str; i++) {
        int j, k;

         if (str[i] == word[0]) {
             for (j = 1, k = i + 1; j < len_word && k < len_str && str[k] == word[j]; j++, k++) {
             }

             if (j == len_word) {
                last_occurrence = i;
            }
        }
    }

     if (last_occurrence != -1) {
        for (int i = last_occurrence; i < len_str - len_word; i++) {
            str[i] = str[i + len_word];
        }

         str[len_str - len_word] = '\0';
    }
}

int main() {
    char str[1000];
    char word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

     size_t len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        str[--len] = '\0';
    }

    printf("Enter the word to remove: ");
    scanf("%s", word);

    removeLastOccurrence(str, word);

    printf("Modified String: %s\n", str);

    return 0;
}
