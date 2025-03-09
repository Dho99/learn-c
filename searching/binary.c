#include <stdio.h>

int main(){
    int arr[10] = {2,5,6,9,10,12,15,18,20,22};

    int i, tar, awal = 2, akhir = 22, tengah;

    printf("Datanya adalah = ");
    for(i = 0; i< 10; i++){
        printf("%d ,", arr[i]);
    }
    printf("\nMasukkan data yang akan dicari : ");
    scanf("%d", &tar);

    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == tar) {
            printf("Data ditemukan pada indeks ke-%d\n", tengah);
            break;
        } else if (arr[tengah] < tar) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    if (awal > akhir) {
        printf("Data tidak ditemukan\n");
    }

    return 0;
}