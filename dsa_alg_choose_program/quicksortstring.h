#ifndef QUICKSORTSTRING_H
#define QUICKSORTSTRING_H
#include <stdio.h>
#include <string.h>

// Fungsi untuk menukar dua angka
void swapStr(char a[50], char b[50]) {
	char temp[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

// Fungsi untuk mencetak array saat ini
void printArrayStr(char arr[][100], int size) {
	for (int i = 0; i < size; i++)
		printf("%s ", arr[i]);
	printf("\n");
}

// Fungsi partisi untuk mengatur ulang array di sekitar pivot
int partitionStr(char arr[][100], int low, int high, int size, int sortMethod) {
	char pivot[100];
	strcpy(pivot, arr[high]); // Pivot adalah elemen terakhir

	int i = (low - 1);      // Indeks elemen yang lebih kecil

	printf("\nPivot: %s\n", pivot);

	for (int j = low; j <= high - 1; j++) {

		if(sortMethod == 1) {

			if (strcmp(arr[j], pivot) < 0) {
				i++;
				swapStr(arr[i], arr[j]);
			}
		} else if(sortMethod == 2) {
			if (strcmp(arr[j], pivot) > 0) {
				swapStr(arr[i], arr[j]);

				if (strcmp(arr[j], pivot) > 0) {
					i++;
					swapStr(arr[i], arr[j]);
				}
			}
		}

	}
    swapStr(arr[i + 1], arr[high]);
    
    printf("Setelah diswap : ");
    printArrayStr(arr, size);

    // Tempatkan pivot pada posisi yang benar

        
    return (i + 1);
}
// Fungsi Quick Sort
void quickSortStr(char arr[][100], int low, int high, int size, int sortMethod) {
    if (low < high) {
        // Mempartisi array dan mendapatkan indeks pivot
        // Rekursi pada bagian sebelum dan sesudah pivot
        int pi = partitionStr(arr, low, high, size, sortMethod);

        quickSortStr(arr, low, pi - 1, size, sortMethod);
        quickSortStr(arr, pi + 1, high, size, sortMethod);
    }
}

int initQuickSortStr(char arr[][100], int n, int sortMethod) {

		printf("Proses sort : \n");

		if(sortMethod == 1) {
			printf("Setelah Sorting (ASC) \n");

		} else if(sortMethod == 2) {
			printf("Setelah Sorting (DESC) \n");
            
		} else {
            return 0;
		}
        
        quickSortStr(arr, 0, n - 1, n, sortMethod);
		printf("\nArray setelah sorting: ");
		printArrayStr(arr, n);

		return 0;
	}

#endif