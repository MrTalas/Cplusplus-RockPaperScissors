#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(){
	char secim[10];
	char silahlar[3][6]={"Tas","Kagit","Makas"};
	while(1){
	srand(time(0));
	int random=rand()%3;
    printf("\nTas-kagit-makas ?");
    scanf("%s",secim);
	if(strcmp(strlwr(secim),"tas")==0){
		if(random == 0){
            printf("\nTas-Tas (Berabere)");
        }
        else if(random == 1){
            printf("\nKagit tasi yener (Yenildin)");
        }
        else if(random == 2){
            printf("\nTas makasi kirar. (Kazandin)");
        }
	}
	if(strcmp(strlwr(secim),"kagit")==0){
		if(random == 0){
            printf("\nKagit tasi yener (Kazandin)");
        }
        else if(random == 1){
            printf("\nKagit-kagit (Berabere)");
        }
        else if(random == 2){
            printf("\nMakas kagidi keser (Yenildin)");
        }
	}
	if(strcmp(strlwr(secim),"makas")==0){
		if(random == 0){
            printf("\nTas makasi kirar (Yenildin)");
        }
        else if(random == 1){
            printf("\nMakas kagidi keser (Kazandin)");
        }
        else if(random == 2){
            printf("\nMakas-makas (Berabere)");
        }
	}
}
	return 0;
}

