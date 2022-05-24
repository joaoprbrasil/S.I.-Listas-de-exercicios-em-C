#include<stdio.h>
#include<locale.h>

/*Escreva um algoritmo para calcular a redução do tempo de vida de um fumante. Pergunte
a quantidade de cigarros fumados por dia e quantos anos ele já fumou. Considere que um
fumante perde 7 minutos de vida a cada cigarro, calcule quantos dias de vida um fumante
perderá. Exiba o total em dias.*/

int main(){
int cigarros, anos, total;
setlocale(LC_ALL, "Portuguese");

printf("Digite a média de cigarros fumados por dia: ");
scanf("%d", &cigarros);
printf("Digite quantos anos faz que o usuário fuma: ");
scanf("%d", &anos);

total = (((anos * 365) * cigarros) * 7 ) / 1440;

    printf("O fumante já perdeu %d dias de vida.", total);
}
