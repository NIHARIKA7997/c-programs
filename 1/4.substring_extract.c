/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void extractSubstring(const char *input, int start, int length, char *output) {
    for (int i = 0; i < length; i++) {
        output[i] = input[start + i];
    }
    output[length] = '\0';
}

int main() {
    char input[] = "This is a Bharat Kumar";
    char substring[7]; // 2 characters + 1 null-terminator

    extractSubstring(input, 10, 7, substring);

    printf("Substring: %s\n", substring);

    return 0;
}


