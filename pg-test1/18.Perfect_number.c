#include <stdio.h>
int isPerfectNumber(int num) {
    if (num <= 0) {
        return 0; 
    }

    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
            printf("%d\t",i);
        }
    }

    return (sum == num);
}

int main() {
    int number;

    // Read the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is a perfect number
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
