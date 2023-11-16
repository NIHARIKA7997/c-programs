#include <stdio.h>

void printBitsBetweenPositions(unsigned char byte, int start, int end) {
    if (start < 0 || start > 7 || end < 0 || end > 7 || start > end) {
        printf("Invalid positions.\n");
        return;
    }

    printf("Original byte: 0x%02X\n", byte);

    unsigned char mask = 0;
    for (int i = start; i <= end; i++) {
        mask |= (1 << i);
    }

    unsigned char result = (byte & mask) >> start;

    printf("Bits between positions %d and %d: 0x%02X\n", start, end, result);

    printf("Binary representation: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char byte;
    int start, end;
    printf("Enter a byte in hexadecimal (e.g., 0x5A): ");
    scanf("%hhx", &byte);
    printf("Enter the starting position (0-7): ");
    scanf("%d", &start);
    printf("Enter the ending position (0-7): ");
    scanf("%d", &end);
    printBitsBetweenPositions(byte, start, end);

    return 0;
}
