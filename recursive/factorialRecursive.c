#include <stdio.h>

int factorialRecursive(int n){
    if(n < 0){
        return 0;
    }else if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }else{
        return n * factorialRecursive(n-1);
    }
}

int main(){

    int factorialNum;

    printf("Masukkan angka faktorial : ");
    scanf("%d", &factorialNum);
    printf("Hasil faktorial dari %d adalah %d\n", factorialNum, factorialRecursive(factorialNum));`


    return 0;
}