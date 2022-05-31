#include<stdio.h>
#include<locale.h>
/*
6.Crie um algoritmo que, dado um número informado pelo usuário, imprima a
tabuada de multiplicação dele de 1 a 10. Use o formato de apresentação
como na tabuada clássica.
*/
int main(){
int num, produto;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um número para aparecer a tabuada dele: ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        produto = num * i;
        printf("%d x %d = %d\n", i, num, produto);
    }
}
