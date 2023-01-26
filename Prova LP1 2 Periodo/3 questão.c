/*
Faça um programa em C, que leia uma frase de até 50 caracteres e imprima a frase sem os 
espaços em branco. Imprimir também a quantidade de espaços em branco da frase.
*/

#include<stdio.h>
#include<string.h>

int main(void){

char frase[51];
int con=0;

  scanf(" %50[^\n]", frase);
  for (int i=0; i<strlen(frase); i++){
    if(frase[i] == ' '){
      con++;
      }else{
        printf("%c", frase[i]);
      }
  }
  printf("\nQuantidade de espaços: %d", con);
  
  return 0;
}