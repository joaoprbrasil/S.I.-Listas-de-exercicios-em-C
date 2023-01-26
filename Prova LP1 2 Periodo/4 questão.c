/*
Faça um programa em C, que leia o conteúdo de 2 matrizes A e B, conforme mostrado abaixo. O 
programa deve, em seguida, imprimir o somatório das matrizes A e B, em uma matriz S. S = A+B
*/

#include<stdio.h>

int main(void){

  int matrizA[3][3], matrizB[3][3];

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      scanf("%d", &matrizA[i][j]);
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      scanf("%d", &matrizB[i][j]);
      matrizA[i][j] += matrizB[i][j];
    }
  }
  printf("S = ");
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("%d ", matrizA[i][j]);
    }
  }
  
  return 0;
}