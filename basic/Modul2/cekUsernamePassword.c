#include <stdio.h>
#include <string.h>

int main(){
    char username[30], password[30];

    printf("Masukkan Username : ");
    scanf("%s", username);

    printf("Masukkan Password : ");
    scanf("%s", password);

    if(strcmp(username, "247006111014") == 0 && strcmp(password, "secretpwd") == 0){
        printf("Login Sukses / Berhasil \n");
    }else{
        printf("Login Gagal \n");
    }


    return 0;
}