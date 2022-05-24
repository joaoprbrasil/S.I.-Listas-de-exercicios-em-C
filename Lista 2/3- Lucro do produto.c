#include<stdio.h>
#include<locale.h>

/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da
compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore um
algoritmo que leia o valor do produto e imprima o valor de venda para o produto.*/

int main(){
float produto, valor;
setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    if(produto < 20){
        valor = (produto * 0.45) + produto;
        printf("O valor de venda do produto com lucro de 45%% será de R$ %.2f.", valor);
    }
        else{
            valor = (produto * 0.30) + produto;
            printf("O valor de venda do produto com lucro de 30%% será de R$ %.2f.", valor);
        }
getch();
}
