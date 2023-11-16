/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int count_occurrence_of_digit(int number, int digit) {
    if (digit < 0 || digit > 9 || number < 0) {
        return 0;
    }
    int count = 0;
    while (number) {
        int rem_digit = number % 10;
        number /= 10;
        if (rem_digit == digit) {
            count++;
        }
    }
    return count;
}

int main() {
    printf("Print occurrence of a digit in a number is %d\n", count_occurrence_of_digit(123334123, 3));
    return 0;
}
