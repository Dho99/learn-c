#include <stdio.h>

int main(){
    int arr[] = {3,2,5,1,8,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, min, temp;

    for(i = 0; i < n; i++){
        min = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}