/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void rotateLeft(int arr[], int len, int pos) {
    if (len < pos) {
        printf("WRONG INPUT\n");
        return;
    }

    for (int i = 0; i < pos; i++) {
        int temp = arr[0];
        for (int j = 0; j < len - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[len - 1] = temp;
    }
}

int main() {
    int len, pos;
    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter %d numbers separated by spaces: ", len);

    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &pos);

    rotateLeft(arr, len, pos);

    printf("Rotated array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



