#include<stdio.h>
#include<locale.h>

int main(){
    int metros, milimetros;
    setlocale(LC_ALL, "Portuguese");


    printf("Digite um valor em metros para converte-lo em milímetros: ");
    scanf("%d", &metros);
    system("cls");

    milimetros = metros * 1000;

    printf("O valor %d em metros convertido para milímetros é igual a %d milímetros.\n", metros, milimetros);
    getch();
}
