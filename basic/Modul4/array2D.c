#include <stdio.h>

int main() {

  int array2D[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int array2dLength;

  array2dLength = sizeof(array2D) / sizeof(**array2D);

  printf("Jumlah semua elemen dalam array adalah %d \n", array2dLength);

  return 0;
}