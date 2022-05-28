#include<stdio.h>
#include<locale.h>

//2.Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

int main(){
int num = 100, i=1;
setlocale(LC_ALL, "Portuguese");

    printf("Números pares de 100 até 200:\n 100");
    while(num < 200){
        num = num + 2;
      	printf(" %d", num);
      	i++;
      	if(i==10){
            printf("\n");
            i=0;
      	}
    }


    printf("\n\nNúmeros ímpares de 100 até 200:\n 101");
    num = 101;
    while(num < 199){
        num = num + 2;
        printf(" %d", num);
        i++;
        if(i==10){
            printf("\n");
            i=0;
      	}
    }
}


