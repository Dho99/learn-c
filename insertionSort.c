#include <stdio.h>

void insertionSort(int numbers[], int n){
    
    for(int i = 0; i < n; i++){
        int temp = numbers[i];
        int j = i - 1;

        while(j >= 0 && numbers[i] > temp){
            numbers[j+1] = numbers[j];
            j = j - 1;
        }

        numbers[j+1] = temp;
    }
}


int main(){
    int n, numbers[50];

    printf("Masukkan Panjang Angka : ");
    scanf("%d", &n);
    printf("\n");

    for(int i = 0; i < n; i++){
        printf("Masukkan Angka ke-%d : ",i+1);
        scanf("%d", &numbers[i]);
    }
    printf("\n");

    printf("Sebelum Di Sort : ");
    for(int i = 0; i < n; i++){
        printf("%d, ", numbers[i]);
    }
    printf("\n");

    printf("Setelah di sort : \n");
    insertionSort(numbers, n);
    printf("Hasil : ");
    for(int i = 0; i < n; i++){
        printf("%d, ", numbers[i]);
    }
    printf("\n");


    return 0;
}