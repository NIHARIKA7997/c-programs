#include <stdio.h>

void separateEvenOdd(int arr[], int size) {
    int even[size], odd[size];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex] = arr[i];
            evenIndex++;
        } else {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    for (int i = 0; i < evenIndex; i++) {
        arr[i] = even[i];
    }

    for (int i = 0; i < oddIndex; i++) {
        arr[evenIndex + i] = odd[i];
    }
}

int main() {
    int input_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(input_array) / sizeof(input_array[0]);

    separateEvenOdd(input_array, size);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", input_array[i]);
    }

    return 0;
}
