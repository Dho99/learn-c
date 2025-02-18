#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <stdio.h>
void bubbleSortAsc(int numbers[], int n){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(numbers[j] > numbers[j+1]){
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
			iter++;
			printf("Iterasi ke-%d : ", iter);
			for(int k = 0; k < n; k++){
				printf("%d, ", numbers[k]);
			}
			printf("\n");
		}
	}
}
void bubbleSortDesc(int numbers[], int n){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(numbers[j] < numbers[j+1]){
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
			iter++;
			printf("Iterasi Ke-%d : ", iter);
			for(int k = 0; k < n; k++){
				printf("%d, ", numbers[k]);
			}
			printf("\n");
		}
	}
}

void bubbleSort(int numbers[], int n){
	int i;

	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	printf("Setelah Sorting (ASC) \n");
	bubbleSortAsc(numbers, n);
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	printf("Setelah Sorting (DESC) \n");
	bubbleSortDesc(numbers, n);
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");


}


#endif