#include <stdio.h>
#include <string.h>

int main(){
    char kodeBarang[10], namaBarang[30], satuan[20];
    int totalBayar, jumlahBeli, hargaBeli, totalHarga;
    double potongan = 0;

    printf("Kode Barang : ");
    fgets(kodeBarang, sizeof(kodeBarang), stdin);

    printf("Nama Barang : ");
    fgets(namaBarang, sizeof(namaBarang), stdin);

    printf("Satuan : ");
    scanf("%s", satuan);

    printf("Jumlah Beli : ");
    scanf("%d", &jumlahBeli);

    printf("Harga Beli : ");
    scanf("%d", &hargaBeli);


    totalHarga = jumlahBeli * hargaBeli;

    if(totalHarga > 100000){
        potongan = 0.10;
    }

    totalBayar = totalHarga - (totalHarga * potongan);


    printf("---------------------------------------- \n");
    printf("MINI MARKET SERBA ADA \n");
    printf("---------------------------------------- \n");
    printf("Kode Barang : %s", kodeBarang);
    printf("Nama Barang : %s", namaBarang);
    printf("---------------------------------------- \n");
    printf("Total Bayar : %d \n", totalBayar);
    printf("---------------------------------------- \n");
    printf("Satuan : %s \n", satuan);
    printf("Jumlah Beli : %d \n", jumlahBeli);
    printf("Harga Beli : %d \n", hargaBeli);
    printf("---------------------------------------- \n");
    printf("Total Harga : %d \n", totalHarga);
    printf("Potongan : %.2f \n", potongan);



    return 0;
}