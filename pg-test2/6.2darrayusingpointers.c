#include <stdio.h>

void initializeArray(int rows, int cols, int (*arr)[cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }
}

void printArray(int rows, int cols, int (*arr)[cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int cols = 4;
    int myArray[rows][cols];

    initializeArray(rows, cols, myArray);

    printf("Initialized 2D array:\n");
    printArray(rows, cols, myArray);

    return 0;
}
