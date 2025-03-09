#include <stdio.h>



void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int arr1 = mid - left + 1;
    int arr2 = right - mid;

    int L[arr1], R[arr2];

    for(i = 0; i < arr1; i++){
        L[i] = arr[left + i];
    }

    for(j = 0; j < arr2; j++){
        R[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while(i < arr1 && j < arr2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < arr1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < arr2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main(){
    int arr[] = {32,21,31,44,11,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted Array \n");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}