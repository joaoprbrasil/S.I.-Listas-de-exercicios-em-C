#include<stdio.h>
#include<locale.h>

/*Joãozinho comprou um cofrinho e resolveu juntar moedas para economizar. Crie um
algoritmo que calcule o valor, em reais, economizado. Considere a existência das
seguintes moedas: 5, 10, 25, 50 centavos e 1 real.*/

int main(){
setlocale(LC_ALL, "Portuguese");
int m5, m10, m25, m50, m1;
float total;

        printf("Digite quantas moedas de 5 centavos há no cofre: ");
		scanf("%d", &m5);
		printf("Digite quantas moedas de 10 centavos há no cofre: ");
		scanf("%d", &m10);
		printf("Digite quantas moedas de 25 centavos há no cofre: ");
		scanf("%d", &m25);
		printf("Digite quantas moedas de 50 centavos há no cofre: ");
		scanf("%d", &m50);
		printf("Digite quantas moedas de 1 real há no cofre: ");
		scanf("%d", &m1);

		total = (m5 * 0.05) + (m10 * 0.1) + (m25 * 0.25) + (m50 * 0.5) + m1;

        system("cls");
		printf("O valor em reais que há no cofre é de R$ %.2f.", total);
		getch();
}
