#include <stdio.h>

int main() {
  int arrays[] = {1, 2, 3, 4, 5, 6};
  int transposedArray[3][2];

  int n = sizeof(arrays) / sizeof(arrays[0]);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      transposedArray[i][j] = arrays[i * 2 + j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d", transposedArray[i][j]);
    }
    printf("\n");
  }

  return 0;
}