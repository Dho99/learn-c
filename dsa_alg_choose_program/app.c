#include <stdio.h>
#include "bubblesort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "selectionsort.h"


int main() {
	char menus[][15] = {"Bubble", "Insertion", "Merge", "Quick", "Selection"};
	int userChooseMenu;
    int userExit = 1;

	printf("=== Selamat datang di Sortify === \n");
	while(userExit != 0) {
		printf("Silakan pilih Algoritma Sorting yang Anda inginkan: \n");
		for (int i = 0; i < sizeof(menus) / sizeof(menus[0]); i++) {
			printf("%d. %s \n", i + 1, menus[i]);
		}
		printf("Masukkan Nomor Menu: ");
		scanf("%d", &userChooseMenu);
		getchar();

		int arrLength;
		printf("Masukkan Panjang Array: ");
		scanf("%d", &arrLength);
		getchar();

		int arr[arrLength];

		for (int i = 0; i < arrLength; i++) {
			printf("Masukkan Angka ke-%d: ", i + 1);
			scanf("%d", &arr[i]);
			getchar();
		}


		switch (userChooseMenu) {
            case 1:
                bubbleSort(arr, arrLength);
                break;
            case 2:
                initInsertionSort(arr, arrLength);
                break;
            case 3:
                initMergeSort(arr, arrLength);
                break;
            case 4:
                initQuickSort(arr, arrLength);
                break;
            case 5:
                initSelectionSort(arr, arrLength);
                break;
            default:
                printf("Tidak ada menu terdaftar\n");
                break;
		}

		printf("Apakah anda ingin melakukan sorting lagi ? (1/0) : ");
        scanf("%d", &userExit);
        printf("\n");
	}

    printf("=== Terimakasih sudah mencoba Sortify === \n");
	return 0;
}
