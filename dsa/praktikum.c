#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int i, j, tmp;

	printf("\nBubble Sort (Descending):\n");
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			for (int k = 0; k < n; k++) {
				printf("%d, ", arr[k]);
			}
			printf("\n");
		}
	}
}

void bubbleAscending(int arr[], int n) {
    int i, j, tmp;

    printf("\nBubble Sort (Ascending):\n");
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
			printf("\n");
			
            if (arr[j + 1] < arr[j]) {
				tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
			for (int k = 0; k < n; k++) {
				printf("%d, ", arr[k]);
			}
        }
    }
}

void sorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort() {
    int array[100], n, i;

    printf("Masukkan banyaknya elemen (maks 100) : ");
    scanf("%d", &n);

    printf("Masukkan nilai :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nSebelum Sorting :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // sorting(array, n);
    bubbleAscending(array, n); 
    printf("\n\nSesudah Sorting (Ascending):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    bubbleSort(array, n);  
    printf("\n\nSesudah Sorting (Descending):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    sort();
	return 0;
}