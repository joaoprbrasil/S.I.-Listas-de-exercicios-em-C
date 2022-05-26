#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define num 10
/*
Faça um programa que leia um vetor de 10 posições e verifique se existem valores
iguais e os escreva na tela.
*/
int main(){
int v[num], same, i, j;
setlocale(LC_ALL, "Portuguese");

    printf("Escreva 10 números: ");
        for(i=0; i<num; i++){
            scanf("%d", &v[i]);     //Leitor dos 10 números
        }
    for(i=0 ; i<num; i++){
        for(j=0 ; j<num; j++){
            if(v[i]==v[j] && i!=j){     //Contador de números iguais
                same++;
            }
        }
    }
if(same==0){
    printf("\nNão existem valores iguais no vetor.");   //Caso não haja números iguais
    return 0;
}

    printf("\nHá %d valores que são iguais e eles são:", same);
        for(i=0 ; i<num; i++){
            for(j=0 ; j<num; j++){                  //Printf dos números iguais
                if(v[i]==v[j] && i!=j){
                    printf(" %d", v[i]);
                }
            }
        }




}
