#include <stdio.h>

void towers(int n, char first, char last, char middle){
    if(n == 1){
        printf("Pindahkan piringan 1 dari %c ke %c \n", first, last);
    }else{
        towers(n-1, first, middle, last);
        printf("Pindahkan piringan %d dari %c ke %c\n", n, first, last);
        towers(n-1, middle, last, first);
    }
}

int main(){
    int n;
    printf("Jumlah piringan : ");
    scanf("%d", &n);
    towers(n, 'A', 'B', 'C');
}