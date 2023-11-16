#include <stdio.h>

int main() {
    // Example 32-bit integer
    unsigned int x = 0xCCDD;

    // Print the original value
    printf("Original value: 0x%X\n", x);

    // Swap the high and low bytes
    x = ((0xFF00 & x) >> 8) | ((0x00FF & x) << 8);

    // Print the value after swapping
    printf("Value after swapping: 0x%X\n", x);

    return 0;
}
