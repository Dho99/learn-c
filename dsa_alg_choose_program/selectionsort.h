#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <stdio.h>

int selectionSort(int arr[], int n, int sortMethod) {
	int i, j, posisi, swap;
	for(i = 0; i < (n-1); i++) {

		posisi = i;
		for (j = i + 1; j < n; j++) {

      if(sortMethod == 1){

        if(arr[posisi] > arr[j]) {
          posisi = j;
        }

      }else if(sortMethod == 2){
        if(arr[posisi] < arr[j]) {
          posisi = j;
        }
      }
		}
		if(posisi != i) {
			swap = arr[i];
			arr[i] = arr[posisi];
			arr[posisi] = swap;
		}
		printf("Iterasi ke - %d :", i+1);
		for(int k = 0; k < n; k++) {
			printf("%d, ", arr[k]);
		}
		printf("\n");
	}
}

int initSelectionSort(int arr[], int n, int sortMethod) {

	if(sortMethod == 1) {
		printf("Setelah Sorting (ASC) \n");
		selectionSort(arr, n, sortMethod);

	} else if(sortMethod == 2) {
		printf("Setelah Sorting (DESC) \n");
		selectionSort(arr, n, sortMethod);

	} else {
		return 0;
	}

	printf("\nArray setelah sorting: ");
	printArray(arr, n);

	return 0;
}

#endif