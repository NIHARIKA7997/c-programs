/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

void toLowerCase(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}
void toUpperCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <='z') {
            *str = *str + ('A' - 'a');
        }
        str++;
    }
}

int main() {
    char *input=(char*)malloc(sizeof(char)*10);
    
    printf("Enter a string");
    scanf("%s", input);
    toLowerCase(input);
    printf("The string in lowercase: %s\n", input);

    toUpperCase(input);

    printf("The string in lowercase: %s\n", input);

    return 0;
}
