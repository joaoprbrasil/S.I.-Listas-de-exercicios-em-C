#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/
int main(){
int mtz[4][4], i, j, con=0;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 16 números para completar a matriz 4x4: \n");
    for(i=0; i<4; i++){
      for(j=0; j<4; j++){
        scanf("%d", &mtz[i][j]);            //Leitor dos números da matriz
        if(mtz[i][j]>10){
            con++;                          //Contador de números maiores que 10
        }
      }
    }
system("cls");
if(con==0){
    printf("Não há números maiores que 10.");       //Caso não haja números maiores que 10
    return 0;
}

    printf("Há %d números maiores que 10 e são eles:", con);
        for(i=0; i<4; i++)
          for(j=0; j<4; j++)
                if(mtz[i][j]>10)
                    printf(" %d", mtz[i][j]);       //printf dos números maiores que 10
}

