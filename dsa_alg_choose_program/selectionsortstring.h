#ifndef SELECTIONSORTSTRING_H
#define SELECTIONSORTSTRING_H
#include <stdio.h>
#include <string.h>

int selectionSortStr(char arr[][100], int n, int sortMethod) {
	int i, j, posisi;
	char swap[20];

	for(i = 0; i < (n-1); i++) {

		posisi = i;
		for (j = i + 1; j < n; j++) {

			if(sortMethod == 1) {
				if(strcmp(arr[posisi], arr[j]) > 0) {
					posisi = j;
				}

			} else if(sortMethod == 2) {
				if(strcmp(arr[posisi], arr[j]) < 0) {
					posisi = j;
				}
			}

			if(posisi != i) {
				strcpy(swap, arr[i]);
				strcpy(arr[i], arr[posisi]);
				strcpy(arr[posisi], swap);
			}
			printf("Iterasi ke - %d :", i+1);
			for(int k = 0; k < n; k++){
				printf("%s, ", arr[k]);
			}
			
			printf("\n");
		}
	}
}

int initSelectionSortStr(char arr[][100], int n, int sortMethod) {
	for(int i = 0; i < n; i++){
		printf("%s, ", arr[i]);
	}
	printf("\n");

	if(sortMethod == 1) {
		printf("Setelah Sorting (DESC) \n");
		selectionSortStr(arr, n, sortMethod);

	} else if(sortMethod == 2) {
		printf("Setelah Sorting (DESC) \n");
		selectionSortStr(arr, n, sortMethod);

	} else {
		return 0;
	}

	printf("\nArray setelah sorting: ");
	for(int i = 0; i < n; i++){
		printf("%s, ", arr[i]);
	}
	printf("\n");

	return 0;
}

#endif