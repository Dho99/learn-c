#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <stdio.h>

void insertionSort(int arr[], int n, int sortMethod) {
	int temp, i, j, iter = 0;

	for(i = 0; i < n; i++) {
		temp = arr[i];
		j = i - 1;

		if(sortMethod == 1) {

			while(j >= 0 && arr[j] > temp ) {
				arr[j+1] = arr[j];
				j = j - 1;
			}

		} else if(sortMethod == 2) {

			while(j >= 0 && arr[j] < temp ) {
				arr[j+1] = arr[j];
				j = j - 1;
			}

		}
		arr[j + 1] = temp;
		printf("Iterasi ke - %d : ", iter+=1);

		for(int k = 0; k < n; k++) {
			printf("%d, ",arr[k]);
		}
		printf("\n");
	}
}

int initInsertionSort(int arr[], int n, int sortMethod) {
	int i;

	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n \n");



	printf("Sebelum disort : \n");
	for(i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n \n");

	printf("Proses sort : \n");
	if(sortMethod == 1) {
		printf("Setelah Sorting (ASC) \n");
		insertionSort(arr, n, sortMethod);

	} else if(sortMethod == 2) {
		printf("Setelah Sorting (DESC) \n");
		insertionSort(arr, n, sortMethod);

	} else {
		return 0;
	}

	printf("\n");

	printf("Setelah disort : \n");
	for(i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}

	printf("\n");
	return 0;

}

#endif