/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void replaceSubstring(char *str, const char *oldSubstr, const char *newSubstr) {
    int strLen = stringLength(str);
    int oldSubstrLen = stringLength(oldSubstr);
    int newSubstrLen = stringLength(newSubstr);

    char result[1024]; 
    int resultIndex = 0;

    for (int i = 0; i < strLen; i++) {
        int match = 1;
        for (int j = 0; j < oldSubstrLen; j++) {
            if (str[i + j] != oldSubstr[j]) {
                match = 0;
                break;
            }
        }
        
        if (match) {
            for (int j = 0; j < newSubstrLen; j++) {
                result[resultIndex++] = newSubstr[j];
            }
            i += oldSubstrLen - 1; 
        } else {
            result[resultIndex++] = str[i];
        }
    }

    result[resultIndex] = '\0'; 

    for (int i = 0; i < resultIndex; i++) {
        str[i] = result[i];
    }
    str[resultIndex] = '\0'; 
}

int main() {
    char originalString[1000] = "Virat kohli is an example and the example is great.";
    const char oldSubstring[] = "example";
    const char newSubstring[] = "sample";

      printf("Original string: %s\n", originalString);

    replaceSubstring(originalString, oldSubstring, newSubstring);

    printf("Modified string: %s\n", originalString);

    return 0;
}

