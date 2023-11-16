#include <stdio.h>
#include <stdbool.h>

bool is_perfect_square(int num) {
    if (num < 1) {
        return false;
    }

    for (int i = 1; i <= num; i++) {
        if (i * i == num) {
            return true;
        }
    }
    return false;
}

int sum_squares(int num) {
    if (num < 1) {
        return 0;  // Changed to return 0 when num is less than 1
    }

    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (is_perfect_square(i)) {
            sum += i;
        }
    }
    return sum;  // Moved return statement outside the loop
}

int main() {
    printf("%d", sum_squares(16));
    return 0;
}
