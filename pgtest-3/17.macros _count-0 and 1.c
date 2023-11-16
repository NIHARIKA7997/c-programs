#include <stdio.h>

#define COUNT_ZEROS(n)  (n & 1 ? 0 : (n >> 1) + COUNT_ZEROS(n >> 1))

#define COUNT_ONES(n)  ((n & 1) + COUNT_ONES(n >> 1))

int main() {
  int number;
  printf("Enter a decimal integer: ");
  scanf("%d", &number);
  printf("Number of zeros: %d\n", COUNT_ZEROS(number));
  printf("Number of ones: %d\n", COUNT_ONES(number));
  return 0;
}