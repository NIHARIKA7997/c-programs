#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number) {
    if (number <= 1)
        return false;
    if (number <= 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;

    int i = 5;
    while (i * i <= number) {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
        i += 6;
    }

    return true;
}

void find_primes_in_range(int start, int end) {
    printf("Prime numbers in the range %d to %d:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (is_prime(num))
            printf("%d, ", num);
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    find_primes_in_range(start, end);

    return 0;
}
