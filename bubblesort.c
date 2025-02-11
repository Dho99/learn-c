#include <stdio.h>

int main(){
	int i, j, tmp;
	int angka[4] = {10, 90, 30, 10};

	for(int i = 1; i <= 4; i++){
		printf("Gelembung ke - %d \n", i);
		for(int j = i; j <= 4; j++){
			for(int i = 0; i < 4; i++){
				printf("%d \t", angka[i]);
			}
			printf("Iterasi ke %d ", j);
			printf("\n");
			if(angka[j+1] < angka[j]){
				tmp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = tmp;
			}
		}
	}

}