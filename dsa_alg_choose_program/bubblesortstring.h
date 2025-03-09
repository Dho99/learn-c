#ifndef BUBBLESORTSTRING_H
#define BUBBLESORTSTRING_H
#include <stdio.h>
#include <string.h>

void bubbleSortStrAlgo(char arr[][100], int n, int sortMethod){
	int j, i, iter = 0;
	char temp[100];
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(sortMethod == 1){
                if(strcmp(arr[j], arr[j+1]) > 0){
                    strcpy(temp, arr[j]);
                    strcpy(arr[j], arr[j+1]);
                    strcpy(arr[j+1], temp);
                }
         	}else if(sortMethod == 2){
                if(strcmp(arr[j], arr[j+1]) < 0){
                    strcpy(temp, arr[j]);
                    strcpy(arr[j], arr[j+1]);
                    strcpy(arr[j+1], temp);
                }

			}

			iter++;
			printf("Iterasi ke-%d : ", iter);
			for(int k = 0; k < n; k++){
				printf("%s, ", arr[k]);
			}
			printf("\n");
		}
	}
}


void bubbleSortStr(char arr[][100], int n, int sortMethod){
	int i;
	
	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%s, ", arr[i]);
	}
	printf("\n \n");

	
	if(sortMethod == 1){
		printf("Setelah Sorting (ASC) \n");
		bubbleSortStrAlgo(arr, n, sortMethod);
		
	}else{
		printf("Setelah Sorting (DESC) \n");
		bubbleSortStrAlgo(arr, n, sortMethod);

	}
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%s, ", arr[i]);
	}
	printf("\n \n");


}


#endif