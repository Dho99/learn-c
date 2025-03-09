#include <stdio.h>

int binRec(int n){
    if(n==1) return 1;
    else return binRec(n/2) + 1;
}

int main(){
    printf("%d \n", binRec(100));
}