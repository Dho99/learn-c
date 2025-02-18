#include <stdio.h>

int main(){
    int arrays[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    float hasilTambah;

    for(int i = 0; i < 3; i++){
        printf("[");
        for(int j = 0; j < 3; j++){
            printf("%d", arrays[i][j]);
            if(j < 2){
                printf(",");
            }
            hasilTambah += arrays[i][j];
        }
        printf("] \n");
    }
    printf("Hasil Penjumlahan dari matrix : %.f", hasilTambah);

    return 0;
}