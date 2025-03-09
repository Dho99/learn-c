#include <stdio.h>

int fpb(int m, int n){
    if(m == 0) return n;
    else if(m < n) return fpb(n,m);
    else return fpb(m % n, n);
}

int main(){
    int num, divider;
    printf("Masukkan angka yang akan dibagi : ");
    scanf("%d", &num);
    printf("Masukkan angka pembagi : ");
    scanf("%d", &divider);

    printf("FPB nya adalah : %d\n", fpb(num, divider));


}

