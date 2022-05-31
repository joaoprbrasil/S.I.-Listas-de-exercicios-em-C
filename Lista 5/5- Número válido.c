#include<stdio.h>
#include<locale.h>
/*
5.Faça um programa que pede ao usuário um número entre 1 e 10. Enquanto ele não
digitar um número válido, o programa vai perguntar de novo.
*/
int main(){
int num=-1;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um número de 1 a 10: ");
    scanf("%d", &num);
        while(num<1 || num>10){
            printf("%d não é um número válido, digite novamente: ", num);
            scanf("%d", &num);
        }
    printf("O número %d é válido.", num);
return 0;
}
