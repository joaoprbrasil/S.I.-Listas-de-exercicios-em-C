#include<stdio.h>
#include<locale.h>

//Uma empresa deseja contratar um encanador a R$ 20,00 por dia. Crie um algoritmo que solicite o
//número de dias trabalhados pelo encanador e imprima o valor líquido a ser pago, sabendo
//que são descontados 8% de imposto de renda.

int main(){
float valor;
int dias;
setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);

    valor = ( dias * 20 ) - (( dias * 20) * 0.08 );

    printf("O valor líquido a ser pago é de %.2f R$ com 8%% de juros descontados.\n" , valor);
    getch();
}
