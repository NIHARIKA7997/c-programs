/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char* strings[] = {"N", "Bharat", "Kumar"};
    int num_len = 3;

    // Access the objects using the pointers
    for (int i = 0; i < num_len; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
