#include <stdio.h>

 int isSymmetric(int matrix[10][10], int rows, int cols) {
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;  
            }
        }
    }
    return 1;  
}

int main() {
    int rows, cols;

     printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

     int matrix[10][10];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

     if (isSymmetric(matrix, rows, cols)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
