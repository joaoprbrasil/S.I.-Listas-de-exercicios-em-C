#include<stdio.h>
#include<locale.h>
/*
7. Uma loja está com uma promoção, os 20 primeiros clientes ganharão um desconto
em suas compras. Para os 10 primeiros clientes, em compras de até R$500, será
dado 10% de desconto, em compras maiores que esse valor será dado um
desconto de 25%. Já para os outros 10 clientes será dado um desconto de 5% em
compras de até R$600 e 15% para compras acima de R$ 600. Mostre o valor
original e o valor descontado de todos os 20 clientes.
*/
int main(){
int clientes;
float valor, valororiginal;
setlocale(LC_ALL, "Portuguese");

    for(clientes=1; clientes<21; clientes++){
    printf("\nVocê é o %d° cliente, digite o valor da compra: ", clientes);
    scanf("%f", &valor);

        if(clientes<=10){
            if(valor<=500){
            valororiginal=valor;
            valor-=valor * 0.1;
            }
            if(valor>500){
            valororiginal=valor;
            valor-=valor * 0.25;
            }
            printf("Sendo um dos primeiros 10 clientes com o valor da compra de até R$ 500\n");
            printf("Você pagará R$ %.2f em vez de R$ %.2f.\n", valor, valororiginal);
        }
        if(clientes<=20 && clientes>10){
            if(valor<=600){
            valororiginal=valor;
            valor-=valor * 0.05;
            }
            if(valor>600){
            valororiginal=valor;
            valor-=valor * 0.15;
            }
            printf("Sendo um dos primeiros 20 clientes com o valor da compra de até R$ 600\n");
            printf("Você pagará R$ %.2f em vez de R$ %.2f.\n", valor, valororiginal);
        }
    }
}
