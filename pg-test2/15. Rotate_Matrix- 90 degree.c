#include <stdio.h>

void rotateMatrix(int *matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = *((matrix + i * n) + j);
            *((matrix + i * n) + j) = *((matrix + j * n) + i);
            *((matrix + j * n) + i) = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = *((matrix + i * n) + j);
            *((matrix + i * n) + j) = *((matrix + i * n) + (n - 1 - j));
            *((matrix + i * n) + (n - 1 - j)) = temp;
        }
    }
}

void displayMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *((matrix + i * cols) + j));
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotateMatrix(&matrix[0][0], n);

    printf("Rotated Matrix:\n");
    displayMatrix(&matrix[0][0], n, n);

    return 0;
}
