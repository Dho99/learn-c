#include <stdio.h>


int main(){
    int A[10], index[10], i, j = 0, k;

    for(i = 0; i < 10; i++){
        printf("Masukkan data yang akan di sort ke - %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Masukkan data yang ingin dicari : ");
    scanf("%d", &k);    

    for(i = 0; i < 10; i++){
        if(A[i] == k){
            index[j] = i;
            j++;
        }
    }

    if(j > 0){
        printf("Data %d yang anda cari ada %d buah \n", k, j);
        printf("Data yang anda cari ada di index ke ");
        for(int i = 0; i < j; i ++){
            printf("%d", index[i]);
        }
        printf("\n");
    }else{
        printf("Angka yang anda cari tidak ditemukan \n");
    }

    return 0;
}