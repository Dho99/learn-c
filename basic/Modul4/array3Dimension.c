#include <stdio.h>
#include <string.h>

int main() {
  char nama[100];
  int vokal = 0, konsonan = 0;

  printf("Masukkan Nama : ");
  fgets(nama, sizeof(nama), stdin);

  nama[strlen(nama) - 1] = '\n';

  for (int i = 0; i < strlen(nama); i++) {
    if (nama[i] == 'a' || nama[i] == 'i' || nama[i] == 'u' || nama[i] == 'e' ||
        nama[i] == 'o' || nama[i] == 'A' || nama[i] == 'I' || nama[i] == 'U' ||
        nama[i] == 'E' || nama[i] == 'O') {
      printf("Karakter ini adalah %c huruf vokal \n", nama[i]);
      vokal++;
    } else if (nama[i] == ' ') {
      printf("Karakter ini adalah spasi \n");
    } else {
      printf("Karakter ini adalah %c huruf konsonan \n", nama[i]);
      konsonan++;
    }
  }

  printf("Vokal total %d, konsonan total %d \n", vokal, konsonan);

  return 0;
}