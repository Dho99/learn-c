#include <stdio.h>

int main(){

    char kodeBarang, namaBarang;
    int jumlahBarang, hargaBarang, totalBelanja;
    double diskon = 0;

    printf("====== TOKO SEJAHTERA ====== \n");
    printf("PILIH KODE BARANG : ");
    scanf("%c", &kodeBarang);
    getchar();

    printf("MASUKAN JUMLAH BARANG : ");
    scanf("%d", &jumlahBarang);
    getchar();

    switch(kodeBarang){
        case 'A':
            hargaBarang = 500;
            namaBarang = 'A';
            break;
        case 'B':
            hargaBarang = 500;
            namaBarang = 'B';
            break;
        default:
            hargaBarang = 0;
            printf("Barang tidak ditemukan \n");
    }

    
    if(jumlahBarang > 10){
        if(kodeBarang == 'A'){
            diskon = 0.05;
        }else if(kodeBarang == 'B'){
            diskon = 0.025;
        }
    }

    totalBelanja = hargaBarang * jumlahBarang;
    totalBelanja = totalBelanja - (totalBelanja * diskon);

    printf("HARGA BARANG %c : %d \n", namaBarang, hargaBarang);
    printf("TOTAL BELANJA: %d \n", jumlahBarang * hargaBarang);
    printf("DISKON: %.2f \n", diskon);
    printf("TOTAL BAYAR : %d \n", totalBelanja);

    return 0;
}
