#include <stdio.h>

int findLargest(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int subArrayMax = findLargest(arr, size - 1);

    if (arr[size - 1] > subArrayMax) {
        return arr[size - 1];
    } else {
        return subArrayMax;
    }
}

int main() {
    int arr[] = {12, 8, 19, 30, 15, 40, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, size);

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
