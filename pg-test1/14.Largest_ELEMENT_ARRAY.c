#include <stdio.h>

int findLargest(int arr[], int size, int maxIndex) {
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return arr[maxIndex];
}



int main() {
    int arr[] = {5, 2, 9, 3, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxIndex=0;
    printf("%d",findLargest(arr, size,maxIndex))  ;

    return 0;
}
