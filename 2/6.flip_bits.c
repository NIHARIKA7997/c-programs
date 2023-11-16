#include <stdio.h>

int count_bits_to_flip(int a, int b) {
    int xor_result = a ^ b;
    int count = 0;

    while (xor_result) {
        count += xor_result & 1;
        xor_result >>= 1;
    }

    return count;
}

int main() {
    int num1 = 5;  // Binary: 0101
    int num2 = 3;  // Binary: 0011

    int flipped_bits_count = count_bits_to_flip(num1, num2);

    printf("Number 1: %d (Binary: %d)\n", num1, num1);
    printf("Number 2: %d (Binary: %d)\n", num2, num2);
    printf("Number of Bits to Flip: %d\n", flipped_bits_count);

    return 0;
}
