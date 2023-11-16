#include <stdio.h>

 int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }

    if (*str1 == *str2) {
        return 0;  
    } else if (*str1 < *str2) {
        return -1;  
    } else {
        return 1;  
    }
}

int main() {
    const char *string1 = "Bharat";
    const char *string2 = "BHARATH";

    int result = compareStrings(string1, string2);

    if (result == 0) {
        printf("The two strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}
