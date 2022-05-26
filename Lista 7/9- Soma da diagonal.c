#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal principal.
*/
int main(){
int mtz[3][3], i, j, soma=0;
setlocale(LC_ALL, "Portuguese");


    printf("Escreva 9 números para completar a matriz 3x3:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){                              //Leitor dos 9 números
            scanf("%d", &mtz[i][j]);
        }
    }
system("cls");

    i=0; j=0;
    soma = mtz[i][j] + mtz[i+1][j+1] + mtz[i+2][j+2];     //Soma da diagonal
    printf("A soma da diagonal principal é: %d", soma);
}


