#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define num 10

//Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

int main(){
int v[num], pares=0, i;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 10 números inteiros: ");
    for(i=0; i<num; i++){
        scanf("%d", &v[i]);                   //leitor de 10 números inteiros
            if( v[i]% 2==0){
                pares++;                      //contador de números pares
            }

    }
system("cls");

    if(pares>0){
        printf("Há %d números pares e eles são:", pares);       //printf da quantidade de números pares
        for(i=0; i<num; i++){
            if( v[i] % 2==0){
                printf(" %d ", v[i]);                           //printf dos números pares
            }
        }
    }
        else
          printf("Não há números pares no vetor.");
}
