#include <stdio.h>

int main(){
    int number;

    printf("Masukkan angka : ");
    scanf("%d", &number);


    if(number > 0){
        printf("Bilangan %d adalah bilangan positif \n", number);
    }else if(number < 0){
        printf("Bilangan %d adalah bilangan negatif \n", number);
    }else{
        printf("Bilangan %d adalah bilangan nol \n", number);
    }


    return 0;
}