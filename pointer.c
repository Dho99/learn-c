#include <stdio.h>

// int main(){
//     int x = 8;
//     printf("NIlai x : %d \n", x);
//     printf("NIlai x : %d", &x); // ketika void tidak muncul ?

//     return 0;
// }

// int main(){
//     char *nama;
//     printf("Pointer string \n");
//     nama = "Ridho Awwaludin";
//     printf("Wilujeng Sumping %s \n", nama);

//     return 0;
// }

// int main(){
//     int x;
//     int *px;

//     x = 17;
//     px = &x;

//     printf("Pointer \t \n");
//     printf("Nilai X : %d \n", x);
//     printf("Nilai *px : %d \n", x);
//     printf("Nilai Memori *px : %#p \n", &px);
    
// }

// int main(){
//     int x, y, *px;

//     x = 89;
//     y = x;
//     px = &x;

//     printf("%d \n", x);
//     printf("%d \n", y);
//     printf("%#p \n", px);
//     printf("%d \n", *px);


// }

int main(){
    int x, *a;
    
    x = 1222;
    a = &x;

    printf("%d", *a);



    return 0;
}