#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdio.h>

// Fungsi untuk menukar dua angka
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk mencetak array saat ini
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Fungsi partisi untuk mengatur ulang array di sekitar pivot
int partition(int arr[], int low, int high, int size, int sortMethod) {
    int pivot = arr[high];  // Pivot adalah elemen terakhir
    int i = (low - 1);      // Indeks elemen yang lebih kecil

    printf("\nPivot: %d\n", pivot);

    for (int j = low; j <= high - 1; j++) {

        if(sortMethod == 1){
            
            if (arr[j] < pivot) {
                swap(&arr[i], &arr[j]);
                
            }
        }else if(sortMethod == 2){
            if (arr[j] > pivot) {
                swap(&arr[i], &arr[j]);
                
            }
        }

        i++;
    }

    printf("Setelah diswap : ");
    printArray(arr, size);

    // Tempatkan pivot pada posisi yang benar
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high, int size, int sortMethod) {
    if (low < high) {
        // Mempartisi array dan mendapatkan indeks pivot
        int pi = partition(arr, low, high, size, sortMethod);

        // Rekursi pada bagian sebelum dan sesudah pivot
        quickSort(arr, low, pi - 1, size, sortMethod);
        quickSort(arr, pi + 1, high, size, sortMethod);
    }
}

int initQuickSort(int arr[], int n, int sortMethod) {


    printf("Proses sort : \n");

    if(sortMethod == 1){
		printf("Setelah Sorting (ASC) \n");
        quickSort(arr, 0, n - 1, n, sortMethod);
		
	}else if(sortMethod == 2){
		printf("Setelah Sorting (DESC) \n");
        quickSort(arr, 0, n - 1, n, sortMethod);
        
	}else{
        return 0;
    }

    printf("\nArray setelah sorting: ");
    printArray(arr, n);

    return 0;
}

#endif