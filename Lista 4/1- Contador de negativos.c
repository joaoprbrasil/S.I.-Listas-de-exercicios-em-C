#include<stdio.h>
#include<locale.h>
/*
1. Escreva um algoritmo que lê 10 valores, um de cada vez, e conta quantos destes
valores são negativos, escrevendo esta informação.
*/
main(){
float num;
int i=0, negativos=0;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 10 números positivos ou negativos para o programa contar quantos números negativos foram escritos:\n ");
	while(i<=9){
        scanf("%f", &num);
		i++;
		if(num < 0)
            negativos++;
    }
    printf("Há %d números negativos.", negativos);
}

