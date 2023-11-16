#include <stdio.h>

int reverseLastThreeDigits(int number) {
    // Extract the last 3 digits
    int lastThree = number % 1000;

     int reversed = 0;
    while (lastThree > 0) {
        int digit = lastThree % 10;
        reversed = reversed * 10 + digit;
        lastThree /= 10;
    }

     int remainingPart = number / 1000;
    int result = remainingPart * 1000 + reversed;

    return result;
}

int main() {
    int number = 123456147; 

    int reversedNumber = reverseLastThreeDigits(number);

    printf("Original number: %d\n", number);
    printf("Number with reversed last 3 digits: %d\n", reversedNumber);

    return 0;
}
