#include <stdio.h>

int main() {
    int array1[] = {2, 2, 2, 2, 2};
    int array2[] = {2, 2, 2};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Common elements: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]);
                break; // Break the inner loop to avoid duplicate printing
            }
        }
    }
    printf("\n");

    return 0;
}
