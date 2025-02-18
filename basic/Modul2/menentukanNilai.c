#include <stdio.h>
#include <string.h>


int main(){
    int nilai, uas, uts, praktek, absensi;
    char predikat, nama[30], nim[30];


    printf("Masukkan NIM : ");
    scanf("%s", nim);
    getchar();

    printf("Masukkan Nama : ");
    fgets(nama, sizeof(nama), stdin);


    printf("Masukkan nilai UAS : ");
    scanf("%d", &uas);

    printf("Masukkan nilai UTS : ");
    scanf("%d", &uts);

    printf("Masukkan nilai Praktek : ");
    scanf("%d", &praktek);

    printf("Masukkan nilai Absensi : ");
    scanf("%d", &absensi);

    nilai = (uas * 0.35) + (uts * 0.30) + (praktek * 0.20) + (absensi * 0.15);

    switch(nilai){
        case 85 ... 100 : 
            predikat = 'A';
            break;
        case 70 ...
         84 : 
            predikat = 'B';
            break;
        case 60 ... 69 :
            predikat = 'C';
            break;
        case 45 ... 59 :
            predikat = 'D';
            break;
        default:
            predikat = 'E';
        break;
    };

    printf("=== PENENTUAN NILAI AKHIR === \n");
    printf("NIM : %s \n", nim);
    printf("NAMA : %s", nama);
    printf("NILAI UAS : %d \n", uas);
    printf("NILAI UTS : %d \n", uts);
    printf("NILAI PRAKTEK : %d \n", praktek);
    printf("NILAI PRESENSI : %d \n", absensi);
    printf("NILAI AKHIR ANGKA YANG DIDAPATKAN : %d \n", nilai);
    printf("NILAI AKHIR HURUF YANG DIDAPATKAN : %c \n", predikat);


    return 0;
}