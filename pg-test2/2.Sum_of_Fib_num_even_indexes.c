/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int fib(int num) {
    if (num <= 1) {
        return 0;
    }

    int final_sum = 0;
    int sum = 0;
    int var = 0;
    int var1 = 1;

    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            final_sum += sum;
        }
        int temp = sum;
        sum = var + var1;
        var = var1;
        var1 = sum;
    }
    return final_sum;
}

int main() {
    int num = 10;
    int result = fib(num);

    if (result != -1) {
        printf("Fibonacci sum for even indexes up to %d: %d\n", num, result);
    } else {
        printf("Invalid input. Please provide a positive number greater than 0.\n");
    }

    return 0;
}

