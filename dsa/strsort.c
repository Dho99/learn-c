#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sortString(char str[][50], int n, bool ascending){
    char temp[50];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n - i -1; j++){
            if(ascending){
                if(strcmp(str[j], str[j+1]) > 0){
                    strcpy(temp, str[j]);
                    strcpy(str[j], str[j+1]);
                    strcpy(str[j+1], temp);
                }
            }else{
                if(strcmp(str[j], str[j+1]) < 0){
                    strcpy(temp, str[j]);
                    strcpy(str[j], str[j+1]);
                    strcpy(str[j+1], temp);
                }

            }
       }
    }


}

int main(){
    int n = 0;
    int sortMethodInput;
    bool ascending;
    
    printf("Masukkan Jumlah string : ");
    scanf("%d", &n);
    getchar();
    
    char str[n][50];


    for(int i = 0; i < n; i++){
        printf("Masukkan String ke - %d : ", i+1);
        fgets(str[i], sizeof(str[i]), stdin);
    }

    printf("Urutkan dari terbesar ke Terkecil ? 1 / 0 : ");
    scanf("%d", &sortMethodInput);

    if(sortMethodInput > 0){
        ascending = true;
    }else{
        ascending = false;

    }



    printf("== Before Sorted String == \n");
    for(int i = 0; i < n; i++){
        printf("%s", str[i]);
    }

    sortString(str, n, ascending);

    if(ascending){
        printf("== Sorted Ascending String == \n");
    }else{
        printf("== Sorted Descending String == \n");
    }

    for(int i = 0; i < n; i++){
        printf("%s", str[i]);
    }


}