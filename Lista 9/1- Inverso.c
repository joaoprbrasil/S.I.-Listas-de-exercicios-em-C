#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
1. Faça um programa que receba uma palavra e a imprima de trás-para-frente
*/
int main(){
char palavra[100];
setlocale(LC_ALL, "Portuguese");

    printf("Digite uma palavra para o programa escrevê-la ao contrário: ");
    gets(palavra);

    for(int i=strlen(palavra)-1; i>=0; i--){
        printf("%c", palavra[i]);
    }
    return 0;
}
