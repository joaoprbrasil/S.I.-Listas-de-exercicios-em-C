#include<stdio.h>
#include<locale.h>

//Programa que diz se o número é ímpar ou par.

int main(){
int num;
setlocale(LC_ALL, "Portuguese");

printf("Escreva um número inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 2==0){
        printf("O número %d é par.", num);
    }
        else{
            printf("O número %d é ímpar.", num);
        }
getch();
}
