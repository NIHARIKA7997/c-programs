/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D array and return a pointer to it
int** allocate2DArray(int rows, int cols) {
    int** arr = (int**)malloc(rows * sizeof(int*));

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1); // Exit the program if memory allocation fails
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1); // Exit the program if memory allocation fails
        }
    }

    return arr;
}

int main() {
    int rows = 3;
    int cols = 4;

    int** myArray = allocate2DArray(rows, cols);

    // Now you can use myArray as a 2D array

    // Don't forget to free the allocated memory when done
    for (int i = 0; i < rows; i++) {
        free(myArray[i]);
    }
    free(myArray);

    return 0;
}



