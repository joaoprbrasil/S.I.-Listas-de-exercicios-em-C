#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
4. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
*/
int main(){
char palavra[100];
int i;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um nome para o programa mostrar apenas as 4 primeiras letras: ");
    gets(palavra);

        for(i = 0; i < 4; i++){
            printf("%c", palavra[i]);
        }
    return 0;
}
