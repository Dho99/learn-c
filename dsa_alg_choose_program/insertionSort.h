#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <stdio.h>

void insertionSort(int arr[], int n){
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

void initInsertionSort(int arr[], int n){
    int i;


    printf("Sebelum disort : \n");
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n \n");
    
    printf("Proses sort : \n");
    insertionSort(arr, n);
    printf("\n \n");

    printf("Setelah disort : \n");
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }

}

#endif