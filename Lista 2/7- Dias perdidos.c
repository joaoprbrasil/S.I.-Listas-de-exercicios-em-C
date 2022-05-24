#include<stdio.h>
#include<locale.h>

//

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
