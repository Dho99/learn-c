#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <stdio.h>

void bubbleSortAlgo(int numbers[], int n, int sortMethod){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(sortMethod == 1){
				if(numbers[j] > numbers[j+1]){
					tmp = numbers[j];
					numbers[j] = numbers[j+1];
					numbers[j+1] = tmp;
				}
			}else if(sortMethod == 2){
				if(numbers[j] < numbers[j+1]){
					tmp = numbers[j];
					numbers[j] = numbers[j+1];
					numbers[j+1] = tmp;
				}
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


void bubbleSort(int numbers[], int n, int sortMethod){
	int i;
	
	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	
	if(sortMethod == 1){
		printf("Setelah Sorting (ASC) \n");
		bubbleSortAlgo(numbers, n, sortMethod);
		
	}else{
		printf("Setelah Sorting (DESC) \n");
		bubbleSortAlgo(numbers, n, sortMethod);

	}
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");


}


#endif