#include<stdio.h>
#include<locale.h>
/*
3.Escreva um programa que conte em ordem reversa, de 50 a zero.
*/
int main(){
setlocale(LC_ALL, "Portuguese");
    printf("Números de 50 a 1: ");
    for(int i=50; i>0; i--){
        printf("%d ", i);
    }
}
