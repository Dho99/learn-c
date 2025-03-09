#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <stdio.h>

void insertionSortAsc(int arr[], int n){
    int temp, i, j, iter = 0;

    for(i = 0; i < n; i++){
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp ){
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = temp;

        printf("Iterasi ke - %d : ", iter+=1);

        for(int k = 0; k < n; k++){
            printf("%d, ",arr[k]);
        }
        printf("\n");
    }
}
void insertionSortDesc(int arr[], int n){
    int temp, i, j, iter = 0;

    for(i = 0; i < n; i++){
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] < temp ){
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = temp;

        printf("Iterasi ke - %d : ", iter+=1);

        for(int k = 0; k < n; k++){
            printf("%d, ",arr[k]);
        }
        printf("\n");
    }
}

void initInsertionSort(int arr[], int n){
    int i, menu;


    printf("Urutkan secara : \n");
	printf("1. Ascending \n");
	printf("2. Descending \n");
	printf("Pilih pengurutan (1/2) : ");
	scanf("%d", &menu);

	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%d, ", arr[i]);
	}
	printf("\n \n");

	

    printf("Sebelum disort : \n");
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n \n");

    printf("Proses sort : \n");
    if(menu == 1){
		printf("Setelah Sorting (ASC) \n");
		insertionSortAsc(arr, n);
		
	}else{
		printf("Setelah Sorting (DESC) \n");
		insertionSortDesc(arr, n);

	}
    
    printf("\n");
    
    printf("Setelah disort : \n");
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    
    printf("\n");

}

#endif