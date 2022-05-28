#include<stdio.h>
#include<locale.h>
/*
1. Um restaurante oferece algumas opções de pratos do cardápio. Cada prato possui
um valor, de acordo com a tabela:
Lasanha R$ 15.00
Feijoada R$ 17.00
Churrasco R$ 20.00
Galinha Caipira R$ 13.00
Crie um algoritmo que, dado o nome do prato, exiba a mensagem de quanto o cliente irá pagar.
*/
int main(){
char prato[15];
setlocale(LC_ALL, "Portuguese");

    printf("( 1 )Lasanha \n( 2 )Feijoada \n( 3 )Churrasco \n( 4 )Galinha Caipira");
    printf("\nEscolha pelo número um prato para saber o valor dele: ");
    scanf("%d", &prato);

    switch(prato){
    case Lasanha:
    printf("O preço da Lasanha é R$ 15,00");
    break;

    case 2:
    printf("O preço da Feijoada é R$ 17,00");
    break;

    case 3:
    printf("O preço da Churrasco é R$ 20,00");
    break;

    case 4:
    printf("O preço da Galinha Caipira é R$ 13,00");
    break;

    default:
    printf("Este número não está na lista de pratos.\n");
    }
return 0;
}
