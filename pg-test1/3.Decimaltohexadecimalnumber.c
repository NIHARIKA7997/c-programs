/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void decimalToHexadecimal(int decimalNumber) {
    char hexadecimal[20];
    int index = 0;

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10) {
            hexadecimal[index] = remainder + '0';
        } else {
            hexadecimal[index] = remainder - 10 + 'A';
        }
        decimalNumber /= 16;
        index++;
    }

    if (index == 0) {
        // Handle the case when the input is 0
        printf("Hexadecimal representation: 0\n");
        return;
    }

    printf("Hexadecimal representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToHexadecimal(decimalNumber);

    return 0;
}


