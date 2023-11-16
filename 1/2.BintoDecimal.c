/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int bintodecimal(int num) {
    int decimal = 0, base = 1;

    while (num > 0) {
        int last_digit = num % 10;
        decimal += last_digit * base;
        num /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    int binary = 1010;
    int decimal = bintodecimal(binary);

    printf("Binary: %d\nDecimal: %d\n", binary, decimal);

    return 0;
}

