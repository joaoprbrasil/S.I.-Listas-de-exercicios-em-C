#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
2. Faça um programa que receba do usuário uma string. O programa imprime a string
sem suas vogais.
*/
int main(){
char palavra[100], vogais[11]={'A','E','I','O','U','a','e','i','o','u'};
int i,j;

    printf("Digite uma palavra para o programa mostrar ela sem suas vogais: ");
    gets(palavra);

        for(i = 0; i < strlen(palavra); i++){
                for(j = 0 ; j <= 10; j++){
                    if(palavra[i] == vogais[j]){
                        palavra[i] = ' ';
                    }
                }
                printf("%c", palavra[i]);
        }
}
