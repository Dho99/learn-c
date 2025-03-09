#ifndef MERGESORTSTRING_H
#define MERGESORTSTRING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk menggabungkan dua subarray
void mergeStr(char arr[][100], int left, int mid, int right, int sortMethod) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Buat array sementara
    char leftArr[n1][50], rightArr[n2][50];

    // Salin data ke array sementara
    for (i = 0; i < n1; i++)
        strcpy(leftArr[i], arr[left + i]);
    for (j = 0; j < n2; j++)
        strcpy(rightArr[j], arr[mid + 1 + j]);

    printf("Left Array: ");
    for (int la = 0; la < n1; la++) {
        printf("%s ", arr[la]);
    }
    printf("\n");
    
    printf("Right Array: ");
    for (int ra = 0; ra < n2; ra++) {
        printf("%s ", arr[ra]);
    }
    printf("\n");

    printf("\n");

    i = 0;
    j = 0;
    k = left;
    if(sortMethod == 1){

        while (i < n1 && j < n2) {
            // if (leftArr[i] <= rightArr[j]) { // Change comparison here
            if (strcmp(leftArr[i], rightArr[j]) <= 0) { // Change comparison here
                strcpy(arr[k], leftArr[i]);
                i++;
            } else {
                strcpy(arr[k], rightArr[j]);
                j++;
            }
            k++;
        }
    }else if(sortMethod == 2){
        while (i < n1 && j < n2) {
            if (strcmp(leftArr[i], rightArr[j]) >= 0) { // Change comparison here
                strcpy(arr[k], leftArr[i]);
                i++;
            } else {
                strcpy(arr[k], rightArr[j]);
                j++;
            }
            k++;
        }
    }

    // Salin elemen yang tersisa dari leftArr[], jika ada
    while (i < n1) {
        strcpy(arr[k], leftArr[i]);
        i++;
        k++;
    }

    // Salin elemen yang tersisa dari rightArr[], jika ada
    while (j < n2) {
        strcpy(arr[k], rightArr[j]);
        j++;
        k++;
    }
}

// Fungsi Merge Sort dengan tampilan proses sorting
void mergeSortStr(char arr[][100], int left, int right, int sortMethod) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Urutkan bagian pertama dan kedua
        mergeSortStr(arr, left, mid, sortMethod);
        mergeSortStr(arr, mid + 1, right, sortMethod);

        // Gabungkan bagian yang telah diurutkan
        mergeStr(arr, left, mid, right, sortMethod);
    }
}

int initMergeSortStr(char arr[][100], int n, int sortMethod) {
    int i;
    
	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%s, ", arr[i]);
	}
	printf("\n \n");


    printf("Proses sort : \n");

    if(sortMethod == 1){
		printf("Setelah Sorting (ASC) \n");
        mergeSortStr(arr, 0, n - 1, sortMethod);
		
	}else if(sortMethod == 2){
		printf("Setelah Sorting (DESC) \n");
        mergeSortStr(arr, 0, n - 1, sortMethod);
        
	}else{
        return 0;
    }

    // Menampilkan array sebelum sorting
    printf("\nArray awal:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");


    // Menampilkan hasil akhir
    printf("\nArray Tergabung:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    return 0;
}

#endif
