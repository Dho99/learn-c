#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mencetak array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Fungsi untuk menggabungkan dua subarray
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
    printArray(leftArr, n1);
    printf("Right Array: ");
    printArray(rightArr, n2);
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

int main() {
    int n;

    // Meminta pengguna memasukkan jumlah elemen
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int arr[n];  // Batas maksimal 100 elemen
    for (int i = 0; i < n; i++) {
        printf("Masukkan angka: ");
        scanf("%d", &arr[i]);
    }

    // Menampilkan array sebelum sorting
    printf("\nArray awal:\n");
    printArray(arr, n);

    // Panggil fungsi mergeSort
    mergeSort(arr, 0, n - 1);

    // Menampilkan hasil akhir
    printf("\nArray Tergabung:\n");
    printArray(arr, n);

    return 0;
}
