#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int (*operation)(int, int);  
     operation = add;
     int result = operation(5, 3);
    printf("5 + 3 = %d\n", result);
     operation = subtract;
    result = operation(5, 3);
    printf("5 - 3 = %d\n", result);
    operation = multiply;
    result = operation(5, 3);
    printf("5 * 3 = %d\n", result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}
