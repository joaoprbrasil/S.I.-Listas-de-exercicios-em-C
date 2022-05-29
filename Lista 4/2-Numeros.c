#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
2. Desenvolver um algoritmo que leia um número não determinado de valores e
calcule e escreva a média aritmética dos valores lidos, a quantidade de valores
positivos, a quantidade de valores negativos e o percentual de valores negativos e
positivos.
*/
main(){
float num, soma, numeros, centnegativos, centpositivos, media;
int i = 1, positivos = 0, negativos = 0, qntnum;
setlocale(LC_ALL, "Portuguese");

    printf("Programa que calcula: \nA média aritmética\nA quantidade de valores positivos\nA quantidade de valores negativos\nO percentual de valores negativos e positivos.\n\nPrimeiro, digite quantos números você deseja calcular: ");
	scanf("%d", &qntnum);
	system("cls");
	printf("Agora digite os %d números para calculá-los:\n", qntnum);
        while(i <= qntnum){
			scanf("%f", &num);
                if(num > 0){
					positivos++;                                         //Contador de números positivos
				}
				if(num < 0){
					negativos++;                                        //Contador de números negativos
				}
                if(i == 1){
                    numeros = num;                                      //Primeiro número da soma da média aritmética
                    i++;
                }
                    else{
                    numeros+=num;                                      //Soma de todos os números
                    i++;
                    }
		}
		system("cls");

        //Cálculo da média aritmética dos valores
		media = numeros / qntnum;
		printf("A média aritmética dos números é %.2f.", media);

		//Quantidade de valores negativos e positivos
		printf("\nDos números digitados há %d números negativos e %d números positivos.", negativos, positivos);


		//Cálculo do percentual de negativos e positivos
		centnegativos = (negativos * 100) / qntnum;
		centpositivos = (positivos * 100) / qntnum;
		printf("\n%.1f%% são negativos e %.1f%% são positivos.", centnegativos, centpositivos);
}
