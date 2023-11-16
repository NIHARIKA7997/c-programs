/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    if (num < 0) {
        return false;
    } else if (num == 0 || num == 1) {
        return true;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (i * i == num) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int num = 4;
    bool result = isPerfectSquare(num);

    if (result) {
        printf("It is a perfect square.\n");
    } else {
        printf("It is not a perfect square.\n");
    }

    return 0;
}


