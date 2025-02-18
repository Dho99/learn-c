#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <stdio.h>

int selectionSort(int arr[], int n){
  int i, j, posisi, swap;
  for(i = 0; i < (n-1); i++){
    
    posisi = i;
    for (j = i + 1; j < n; j++){
      if(arr[posisi] > arr[j]){
        posisi = j;
      }
    }
    if(posisi != i){
      swap = arr[i];
      arr[i] = arr[posisi];
      arr[posisi] = swap;
    }
    printf("Iterasi ke - %d :", i+1);
    for(int k = 0; k < n; k++){
      printf("%d, ", arr[k]);
    }
    printf("\n");
  }
}

int initSelectionSort(int arr[], int n){
  int i;
  selectionSort(arr, n);

  printf("Hasil pengurutan sebagai berikut:\n");
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

#endif