#include <stdio.h>

void Print(int arr[][3], int rows, int cols) {
    if (rows <= 0 || cols <= 0)
        return;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
                printf("%d", arr[i][j]);
            else
                printf(" ");
 
        }
        printf("\n");
    }
}

int main() {
    int mat1[4][4] = {{1, 2, 3,4}, {4, 5, 6,4}, {7, 8, 9,1},{1,2,3,4}};
    
    Print(mat1, 4, 4);

    return 0;
}
