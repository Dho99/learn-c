#include <stdio.h>
#include "sortchooser.c"
#include "bubblesort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "selectionsort.h"
#include "bubblesortstring.h"
#include "insertionsortstring.h"
#include "mergesortstring.h"
#include "quicksortstring.h"
#include "selectionsortstring.h"


int main() {
	char menus[][15] = {"Bubble", "Insertion", "Merge", "Quick", "Selection"};
	int userChooseMenu;
	int userExit = 1;
	int sortMethod;
	int sortType;

	printf("=== Selamat datang di Sortify === \n");
	while(userExit != 0) {

		printf("Pilih tipe data yang disort: \n");
		printf("1. Integer \n");
		printf("2. String \n");
		scanf("%d", &sortType);


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


		if(sortType == 2) {

			char arr[arrLength][100];

			for (int i = 0; i < arrLength; i++) {
				printf("Masukkan String / Karakter ke-%d: ", i + 1);
				scanf("%s", arr[i]);
				getchar();
			}

			switch (userChooseMenu) {
			case 1:
				sortMethod = sortMethodChooser();
				bubbleSortStr(arr, arrLength, sortMethod);
				break;
			case 2:
				sortMethod = sortMethodChooser();
				initInsertionSortStr(arr, arrLength, sortMethod);
				break;
			case 3:
				sortMethod = sortMethodChooser();
				initMergeSortStr(arr, arrLength, sortMethod);
				break;
			case 4:
				sortMethod = sortMethodChooser();
				initQuickSortStr(arr, arrLength, sortMethod);
				break;
			case 5:
				sortMethod = sortMethodChooser();
				initSelectionSortStr(arr, arrLength, sortMethod);
				break;
			default:
				printf("Tidak ada menu terdaftar\n");
				break;
			}
		} else {
			int arr[arrLength];

			for (int i = 0; i < arrLength; i++) {
				printf("Masukkan Angka ke-%d: ", i + 1);
				scanf("%d", &arr[i]);
				getchar();
			}

			switch (userChooseMenu) {
			case 1:
				sortMethod = sortMethodChooser();
				bubbleSort(arr, arrLength, sortMethod);
			case 2:
				sortMethod = sortMethodChooser();
				initInsertionSort(arr, arrLength, sortMethod);
				break;
			case 3:
				sortMethod = sortMethodChooser();
				initMergeSort(arr, arrLength, sortMethod);
				break;
			case 4:
				sortMethod = sortMethodChooser();
				initQuickSort(arr, arrLength, sortMethod);
				break;
			case 5:
				sortMethod = sortMethodChooser();
				initSelectionSort(arr, arrLength, sortMethod);
				break;
			default:
				printf("Tidak ada menu terdaftar\n");
				break;
			}
		}






		printf("Apakah anda ingin melakukan sorting lagi ? (1/0) : ");
		scanf("%d", &userExit);
		printf("\n");
	}

	printf("=== Terimakasih sudah mencoba Sortify === \n");
	return 0;
}
