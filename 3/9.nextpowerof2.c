#include <stdio.h>

int main() {
    int val = 10;
    int count = 0;

    while (val > 0) {
        val>>=1; // Decrement val by 1 in each iteration
        count++; // Increment the count
    }

    printf("Count: %d\n", 1<< count);

    return 0;
}
