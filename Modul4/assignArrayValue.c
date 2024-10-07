#include <stdio.h>

int main() {
  int angka[5] = {10, 20, 30, 40, 50};

  angka[1] = 25;
  angka[3] = 45;

  printf("[ ");
  for (int i = 0; i < 5; i++) {
    printf("%d", angka[i]);
    if (i < 4) {
      printf(", ");
    }
  }
  printf(" ]");
  printf("\n");

  return 0;
}