#include<stdio.h>
#include<locale.h>

/*Um cliente gostaria de saber o quanto de seu salário é destinado ao pagamento da conta de
energia elétrica. Sabendo que a tarifa é R$ 0,78 por kWh, faça um algoritmo que receba o
salário do cliente e seu consumo (em kWh), e imprima qual a porcentagem do salário do
cliente deve ser destinado para pagamento da conta de energia elétrica.*/

int main(){
setlocale(LC_ALL, "Portuguese");
float salario, kwh, valor;

printf("Digite o seu salário: ");
    scanf("%f", &salario);
printf("Digite o consumo de energia em kWh: ");
    scanf("%f", &kwh);

    valor = ((kwh * 0.78) * 100) / salario;

    printf("A porcentagem do seu salário destinado a conta de energia é de %.1f%%.", valor);
    getch();
}

