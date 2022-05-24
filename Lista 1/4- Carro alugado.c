#include<stdio.h>
#include<locale.h>

//Escreva um algoritmo que pergunte a quantidade de km percorridos por um carro alugado
//pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado. Calcule o
//preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por Km rodado.

int main(){
float quantidadekm, dias, valor;
setlocale(LC_ALL, "Portuguese");

printf("Digite a quantidade de quilômetros percorrido pelo o carro alugado: ");
    scanf("%f", &quantidadekm);
printf("Digite o total de dias desde que o carro foi alugado: ");
    scanf("%f", &dias);

        valor = (dias * 60) + (quantidadekm * 0.15);

    printf("O preço a pagar pelo aluguel do carro é R$ %.2f.", valor);
    getch();
}
