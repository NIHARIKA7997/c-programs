#include <stdio.h>

void remove_duplicates(int arr[], int size) {
    int findex=0;
      printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    for (int i =0; i <size; i++) {
        if (arr[i] == arr[i+1]) {
            
            i++;
            
        }
        else
        {
            arr[findex++]=arr[i];
        }
    }
    

    printf("\nModified Array: ");
    for (int i = 0; i <findex; i++) {
        printf("%d ", arr[i]);
}

}
    



int main() {
    int arr[] = {1,1,1,2,2,2,3,4,5,6,7,7,7,9,9,9,9,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxIndex=0;
    remove_duplicates(arr, size)  ;

    return 0;
}
