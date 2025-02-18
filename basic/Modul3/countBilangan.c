#include <stdio.h>

int main(){
    int userInput;

    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &userInput);

    for(int i = 1; i <= userInput; i++){
        printf("Bilangan ke : %d, dari %d \n", i, userInput);
    }

    return 0;
}