#include <stdio.h>

void bubbleSortAsc(int numbers[], int n){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(numbers[j] > numbers[j+1]){
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
			iter++;
			printf("Iterasi ke-%d : ", iter);
			for(int k = 0; k < n; k++){
				printf("%d, ", numbers[k]);
			}
			printf("\n");
		}
	}
}
void bubbleSortDesc(int numbers[], int n){
	int j, i, tmp, iter = 0;
	for(i = 0; i < n - 1; i++){
		for( j = 0; j < n-i-1; j++){
			if(numbers[j] < numbers[j+1]){
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
			iter++;
			printf("Iterasi Ke-%d : ", iter);
			for(int k = 0; k < n; k++){
				printf("%d, ", numbers[k]);
			}
			printf("\n");
		}
	}
}

void bubbleSort(){
	int numbers[50], n, i;
	printf("Masukkan Panjang Elemen, max 50 : ");
	scanf("%d", &n);

	for(i = 0; i < n; i++){
		printf("Masukkan angka : ");
		scanf("%d", &numbers[i]);
	}

	printf("Sebelum Sorting \n");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	printf("Setelah Sorting (ASC) \n");
	bubbleSortAsc(numbers, n);
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");

	printf("Setelah Sorting (DESC) \n");
	bubbleSortDesc(numbers, n);
	printf("Hasil : ");
	for(i = 0; i < n; i++){
		printf("%d, ", numbers[i]);
	}
	printf("\n \n");


}

int main(){
	bubbleSort();
	return 0;
}