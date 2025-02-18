#include <stdio.h>

int main(){
    
    // for (int i = 10; i >= 0; i-- ){
    //     if(i % 2 == 0){
    //         printf("%d adalah bilangan genap \n", i);
    //     }else{
    //         printf("%d adalah bilangan ganjil \n", i);

    //     }
    // }

    // int userInput;

    // printf("Masukkan angka : ");
    // scanf("%d", &userInput);

    // for(int i = 1; i<=userInput; i++){
    //     printf("%d x %d = %d \n", i, userInput, userInput * i);
    // }

    // for (int i = 10; i>=0; i--){
    //     for (int j = 1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int i = 0;

    // while(i <= 3){
    //     printf("Loop ke %d \n", i);
    //     i++;
    // }

    // int userInput;

    // printf("Masukkan angka : ");
    // scanf("%d", &userInput);
    // getchar();

    // while(userInput >= 0){
    //     printf("Anda memasukkan angka %d \n", userInput);
    //     printf("Masukkan angka : ");
    //     scanf("%d", &userInput);
    //     getchar();

    // }

    // int pin, attempt = 1;

    // printf("Masukkan PIN anda 4 digits: ");
    // scanf("%d", &pin);
    // getchar();

    // while(attempt <= 3){
    //     if(pin == 1234){
    //         printf("Pin benar \n");
    //         return 0;
    //     }else{
    //         printf("Percobaan ke %d, pin anda salah \n", attempt);
    //         attempt++;
    //         if(attempt <= 3){
    //             printf("Coba lagi masukkan PIN anda 4 digits: ");
    //             scanf("%d", &pin);
    //             getchar();
    //         }
    //     }
    // }
    // printf("Kartu anda terblokir, nice try diddy \n");

    // int i = 0;

    // do{
    //     printf("Nilai i = %d", i);
    //     i++;
    // }while(i < 3);

    // int result = 7, answer;

    // printf("Selamat datang di game TES HOKI \n");

    // do{
    //     printf("Masukkan tebakan anda : ");
    //     scanf("%d", &answer);

    //     if(answer < result){
    //         printf("Jawaban anda terlalu rendah \n");
    //     }else if(answer > result){
    //         printf("Jawaban anda terlalu tinggi \n");
    //     }else{
    //         printf("Jawaban anda benar, jawabannya adalah %d \n", result);
    //     }

    // }while(result != answer);


    int noMenu;
    char bookAgain;

    printf("Selamat datang di restoran kami ! \n");
    printf("Menu Makanan : \n");
    printf("1. Nasi Goreng \n");
    printf("2. Mie Ayam \n");

    do{
        printf("Pilih Menu (1-2): ");
        scanf("%d", &noMenu);
        getchar();

        if(noMenu == 1){
            printf("Anda memilih Nasi Goreng \n");
        }else if(noMenu == 2){
            printf("Anda memilih Mie Ayam \n");
        }

        printf("Apakah anda ingin memesan lagi ? (y / t) : ");
        scanf("%c", &bookAgain);
        getchar();
        
    }while(bookAgain == 'y');

    printf("Terimakasih sudah order \n");

    return 0;
}