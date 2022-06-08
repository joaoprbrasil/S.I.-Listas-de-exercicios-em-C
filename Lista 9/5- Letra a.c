#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
5. . Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiuscula
ou minúscula).
*/
int main(){
char palavra[100], letra[2]={'a','A'};
setlocale(LC_ALL, "Portuguese");

    printf("O programa só irá mostrar o nome digitado caso ele comece com a letra A.\n");
    printf("Digite um nome: ");
    gets(palavra);

        if(palavra[0]==letra[0] || palavra[0]==letra[1]){
            printf("%s", palavra);
        }
    return 0;
}
