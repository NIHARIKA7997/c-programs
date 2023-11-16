#include <stdio.h>

void print_pattern(int rows) {
    if (rows < 1) {
        return;
    }
    else {
        int var = 9;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= 2 * rows; j++) {
                if (i == j) {
                    printf("%d", i);
                }
                else if (i + j == 10 && i < j && i != j) {
                    printf("%d", var);
                    var--;
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}

int main() {
    print_pattern(5);
    return 0;
}
