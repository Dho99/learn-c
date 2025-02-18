#include <limits.h>
#include <stdio.h>

int main() {
  int arrays[5] = {1, 2, 3, 4, 5}, smaller, higher;

  int arrLength = sizeof(arrays) / sizeof(*arrays);

  int mini = INT_MAX;
  int maxi = INT_MIN;

  for (int i = 0; i < arrLength; i++) {
    if (arrays[i] < mini) {
      mini = arrays[i];
    }
  }

  for (int i = 0; i < arrLength; i++) {
    if (arrays[i] > maxi) {
      maxi = arrays[i];
    }
  }

  printf("Higher Value = %d \n", maxi);
  printf("Smaller Value = %d \n", mini);

  return 0;
}