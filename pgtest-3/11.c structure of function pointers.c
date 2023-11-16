#include <stdio.h>

// Define a structure for arithmetic operations with function pointers
struct ArithmeticOperations {
    int (*add)(int, int);
    int (*subtract)(int, int);
    int (*multiply)(int, int);
    float (*divide)(int, int);
};

// Function implementations for arithmetic operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Cannot divide by zero\n");
        return 0.0;
    }
}

int main() {
     struct ArithmeticOperations ops = {
        .add = add,
        .subtract = subtract,
        .multiply = multiply,
        .divide = divide
    };

    // Perform arithmetic operations using function pointers
    int result_add = ops.add(512, 512);
    int result_subtract = ops.subtract(1024, 512);
    int result_multiply = ops.multiply(256, 2);
    float result_divide = ops.divide(1024, 2);

     printf("Addition: %d\n", result_add);
    printf("Subtraction: %d\n", result_subtract);
    printf("Multiplication: %d\n", result_multiply);
    printf("Division: %.2f\n", result_divide);

    return 0;
}
