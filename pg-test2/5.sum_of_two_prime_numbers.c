#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }

    return true;
}

void find_unique_prime_pairs_with_sum(int input_num) {
    if (input_num < 2) {
        return; 
    }

    int list_prime[input_num];
    int num_primes = 0;

    // Find prime numbers up to input_num
    for (int i = 2; i <= input_num; i++) {
        if (is_prime(i)) {
            list_prime[num_primes] = i;
            num_primes++;
        }
    }

    int pairs_found = 0;

    // Find unique pairs of prime numbers
    for (int i = 0; i < num_primes; i++) {
        for (int j = i + 1; j < num_primes; j++) {
            if (list_prime[i] + list_prime[j] == input_num) {
                printf("Pair: %d, %d\n", list_prime[i], list_prime[j]);
                pairs_found++;
            }
        }
    }

    if (pairs_found == 0) {
        printf("No prime pairs found for %d\n", input_num);
    }
}

int main() {
    int input_num = 50; // Replace with your desired input number
    find_unique_prime_pairs_with_sum(input_num);
    return 0;
}
