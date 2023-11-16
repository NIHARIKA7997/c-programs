/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int searchElement(int arr[], int size, int search, int *index) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            *index = i;
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elementToSearch = 3;

    int index;
    int found = searchElement(arr, size, elementToSearch, &index);

    if (found) {
        printf("Element %d found at index %d.\n", elementToSearch, index);
    } else {
        printf("Element %d not found in the array.\n", elementToSearch);
    }

    return 0;
}


