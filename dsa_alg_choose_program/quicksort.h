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
int partition(int arr[], int low, int high, int size) {
    int pivot = arr[high];  // Pivot adalah elemen terakhir
    int i = (low - 1);      // Indeks elemen yang lebih kecil

    printf("\nPivot: %d\n", pivot);

    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);

        }
    }

    printf("Setelah diswap : ");
    printArray(arr, size);

    // Tempatkan pivot pada posisi yang benar
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high, int size) {
    if (low < high) {
        // Mempartisi array dan mendapatkan indeks pivot
        int pi = partition(arr, low, high, size);

        // Rekursi pada bagian sebelum dan sesudah pivot
        quickSort(arr, low, pi - 1, size);
        quickSort(arr, pi + 1, high, size);
    }
}

int initQuickSort(int arr[], int n) {

    printf("\nArray sebelum sorting: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1, n);

    printf("\nArray setelah sorting: ");
    printArray(arr, n);

    return 0;
}

#endif