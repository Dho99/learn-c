#include <stdio.h>

int main(){
    int userInput, countAllNumber = 0;

    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &userInput);

    for(int i = 1; i <= userInput; i++){
        countAllNumber+=i;
    }
    printf("Semua : %d \n", countAllNumber);
    printf("Rata - Rata : %d \n", countAllNumber / userInput);

    return 0;
}