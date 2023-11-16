#include <stdio.h>

 int isSparseMatrix(int rows, int cols, int matrix[10][10]) {
    int zeroCount = 0;
    int nonZeroCount = 0;

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            } else {
                nonZeroCount++;
            }
        }
    }

    // Check the ratio of zero to non-zero elements
    if (zeroCount > nonZeroCount) {
        return 1; // Sparse matrix
    } else {
        return 0; // Not a sparse matrix
    }
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

     if (isSparseMatrix(rows, cols, matrix)) {
        printf("The given matrix is a sparse matrix.\n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }

    return 0;
}
