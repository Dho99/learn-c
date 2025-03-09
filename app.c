#include <stdio.h>




// Bubble Sort ASC DESC
void bubbleSortAsc(int numbers[], int n){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(numbers[j] > numbers[j+1]){
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
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
void bubbleSortDesc(int numbers[], int n){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(numbers[j] < numbers[j+1]){
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
			iter++;
			printf("Iterasi Ke-%d : ", iter);
			for(int k = 0; k < n; k++){
				printf("%d, ", numbers[k]);
			}
			printf("\n");
		}
	}
}

void bubbleSort(int numbers[], int n){
	int i;

	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	printf("Setelah Sorting (ASC) \n");
	bubbleSortAsc(numbers, n);
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	printf("Setelah Sorting (DESC) \n");
	bubbleSortDesc(numbers, n);
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");


}


// Insertion Sort
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


// Mergesort
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Buat array sementara
    int leftArr[n1], rightArr[n2];

    // Salin data ke array sementara
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];


    printf("Left Array: ");
    for (int la = 0; la < n1; la++) {
        printf("%d ", arr[la]);
    }
    printf("\n");
    
    printf("Right Array: ");
    for (int ra = 0; ra < n2; ra++) {
        printf("%d ", arr[ra]);
    }
    printf("\n");

    printf("\n");

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Salin elemen yang tersisa dari leftArr[], jika ada
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Salin elemen yang tersisa dari rightArr[], jika ada
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }


}

// Fungsi Merge Sort dengan tampilan proses sorting
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Urutkan bagian pertama dan kedua
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan bagian yang telah diurutkan
        merge(arr, left, mid, right);
    }
}

int initMergeSort(int arr[], int n) {
    
    // Menampilkan array sebelum sorting
    printf("\nArray awal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Panggil fungsi mergeSort
    mergeSort(arr, 0, n - 1);

    // Menampilkan hasil akhir
    printf("\nArray Tergabung:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Selection Sort
int selectionSort(int arr[], int n){
  int i, j, posisi, swap;
  for(i = 0; i < (n-1); i++){
    
    posisi = i;
    for (j = i + 1; j < n; j++){
      if(arr[posisi] > arr[j]){
        posisi = j;
      }
    }
    if(posisi != i){
      swap = arr[i];
      arr[i] = arr[posisi];
      arr[posisi] = swap;
    }
    printf("Iterasi ke - %d :", i+1);
    for(int k = 0; k < n; k++){
      printf("%d, ", arr[k]);
    }
    printf("\n");
  }
}

int initSelectionSort(int arr[], int n){
  int i;
  selectionSort(arr, n);

  printf("Hasil pengurutan sebagai berikut:\n");
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}


// Quick Sort
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



// Init App
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


