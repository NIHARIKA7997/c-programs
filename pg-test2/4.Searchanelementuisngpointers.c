#include <stdio.h>

int* searchElement(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (*arr == element) {
            return arr;   
        }
        arr++;   
    }
    return NULL;   
}

int main() {
    int size = 5;
    int array[] = {10, 20, 30, 40, 50};
    int searchElementValue = 30;

    int* result = searchElement(array, size, searchElementValue);

    if (result) {
        printf("Element %d found at index %ld\n", *result, result - array);
    } else {
        printf("Element %d not found in the array\n", searchElementValue);
    }

    return 0;
}
