#include <stdio.h>

int recursiveFibo(int n){
    if(n==1){
        return 1;
    }else if(n==2) {
        return 1;
    }else{
        return recursiveFibo(n-1) + recursiveFibo(n-2);
    }
}



int fiboHelper(int x, int y, int n){
    if(n == 0) return x;
    else if(n == 1) return y;
    else return fiboHelper(y, x+y, n-1);
}

int tailRecursiveFibo(int n){
    return fiboHelper(0, 1, n);
}

int main(){
    int fiboNum;
    printf("Masukkan angka fibonacci : ");
    scanf("%d", &fiboNum);
    printf("Fibo Result : %d \n", tailRecursiveFibo(fiboNum));
}

// If you want to use fibonacci function effectively, you should use tailRecursiveFibo function