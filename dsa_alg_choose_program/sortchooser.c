#include <stdio.h>

int sortMethodChooser(){
    int sortMethod;


	printf("Urutkan secara : \n");
	printf("1. Ascending \n");
	printf("2. Descending \n");
	printf("Pilih pengurutan (1/2) : ");
	scanf("%d", &sortMethod);

    return sortMethod;
}