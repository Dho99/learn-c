#ifndef INSERTIONSORTSTRING_H
#define INSERTIONSORTSTRING_H
#include <stdio.h>
#include <string.h>

void insertionSortStr(char arr[][100], int n, int sortMethod) {
	int i, j, iter = 0;
	char temp[20];

	for(i = 0; i < n; i++) {
		strcpy(temp, arr[i]);
		j = i - 1;

		if(sortMethod == 1) {

			while(j >= 0 && strcmp(arr[j], temp) > 0 ) {
				strcpy(arr[j+1], arr[j]);
				j = j - 1;
			}

		} else if(sortMethod == 2) {

			while(j >= 0 && strcmp(arr[j], temp) < 0) {
				strcpy(arr[j+1], arr[j]);
				j = j - 1;
			}

		}
		strcpy(arr[j + 1], temp);
		printf("Iterasi ke - %d : ", iter+=1);

		for(int k = 0; k < n; k++) {
			printf("%s, ",arr[k]);
		}
		printf("\n");
	}
}

int initInsertionSortStr(char arr[][100], int n, int sortMethod) {
	int i;

	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++) {
		printf("%s, ", arr[i]);
	}
	printf("\n \n");



	printf("Sebelum disort : \n");
	for(i = 0; i < n; i++) {
		printf("%s, ", arr[i]);
	}
	printf("\n \n");

	printf("Proses sort : \n");
	if(sortMethod == 1) {
		printf("Setelah Sorting (ASC) \n");
		insertionSortStr(arr, n, sortMethod);

	} else if(sortMethod == 2) {
		printf("Setelah Sorting (DESC) \n");
		insertionSortStr(arr, n, sortMethod);

	} else {
		return 0;
	}

	printf("\n");

	printf("Setelah disort : \n");
	for(i = 0; i < n; i++) {
		printf("%s, ", arr[i]);
	}

	printf("\n");
	return 0;

}

#endif