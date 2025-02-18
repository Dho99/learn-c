#include <stdio.h>

int main(){
  int matrix[2][3];
  int transposed[3][2];

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("Masukkan Elemen matrix ke [%d][%d] : ", i+1, j+1);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Matrix Awal : \n");
  printf("[ \n");
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++ ){
        transposed[j][i] = matrix[i][j];
        printf("%d", matrix[i][j]);
        if(i < 2){
          printf(",");
        }
    }
    printf("\n");
  }
  printf(" ]\n");


  printf("Hasil Transpose : \n");
  printf("[ \n");
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 2; j++){
          printf("%d",transposed[i][j]);
          if(j < 1){
            printf(",");
          }
      }
      printf("\n");
    }
  printf(" ]");


  return 0;
}