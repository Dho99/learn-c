#include <stdio.h>
#include <stdbool.h>

int main(){
    int attempt = 0, pin, menuId, balance = 1000, withdrawAmount, paymentCode, payAmount, accountNumber, transferAmount, isContinueNumber;
    bool isContinue = true;

    printf("Selamat datang di ATM ! \n");


    do{
        printf("Masukkan PIN Anda : ");
        scanf("%d", &pin);
        getchar();

        if(pin == 1234){
            do{
                printf("Pilih Menu Transaksi \n");
                printf("1. Tarik Tunai \n");
                printf("2. Cek Saldo \n");
                printf("3. Pembayaran \n");
                printf("4. Transfer \n");
                printf("Masukkan Nomor Menu (1-4) : ");

                scanf("%d", &menuId);
                getchar();

                if(menuId == 1){
                    printf("Masukkan nominal penarikan : ");
                    scanf("%d", &withdrawAmount);
                    getchar();

                    if(withdrawAmount <= balance){
                        printf("Silakan Ambil Uang anda \n");
                        printf("Saldo Anda %d \n", balance - withdrawAmount);
                        balance = balance - withdrawAmount;
                    }else{
                        printf("balance anda tidak mencukupi, Saldo anda adalah %d \n", balance);
                    }

                }else if(menuId == 2){

                    printf("Saldo anda %d \n", balance);

                }else if(menuId == 3){

                    printf("Masukkan Kode Pembayaran : ");
                    scanf("%d", &paymentCode);
                    getchar();

                    printf("Masukkan Nominal Pembayaran : ");
                    scanf("%d", &payAmount);
                    getchar();

                    if(payAmount > balance){
                        printf("Saldo Anda tidak mencukupi \n");
                    }else{
                        printf("Pembayaran Berhasil\n");
                        balance = balance - payAmount;
                    }
                    
                }else if(menuId == 4){
                    printf("Masukkan Nomor Rekening : ");
                    scanf("%d", &accountNumber);
                    getchar();

                    printf("Masukkan Jumlah Transfer : ");
                    scanf("%d", &transferAmount);

                    if(transferAmount > balance){
                        printf("Saldo Anda tidak mencukupi \n");
                    }else{
                        printf("Pembayaran Berhasil\n");
                        balance = balance - transferAmount;
                    }
                }

                printf("Apakah anda ingin melakukan transaksi lainnya (1 / 0): ");
                scanf("%d", &isContinueNumber);
                getchar();
                if(isContinueNumber == 1){
                    isContinue = true;
                }else{
                    isContinue = false;
                }


            }while(isContinue == true);
                printf("Terimakasih telah menggunakan ATM Kami ! \n");
                return 0;




        }else{
            printf("PIN Salah, Silakan masukkan PIN dengan benar \n");
            attempt++;
        }

    }while(attempt < 3);
        printf("Kartu Anda Diblokir, nice try Diddy \n");
        return 0;

}