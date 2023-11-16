/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int result = 0; // Initialize the result to 0

    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR all elements in the array
    }

    for (int i = 1; i <= n + 1; i++) {
        result ^= i; // XOR with numbers from 1 to n+1
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissingNumber(arr, n);

    printf("The missing number is: %d\n", missing);

    return 0;
}



