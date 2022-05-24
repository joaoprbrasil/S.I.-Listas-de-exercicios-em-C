#include<stdio.h>
#include<locale.h>

//Faça um algoritmo que calcule o volume de um cilindro.

int main(){
float altura, raio, volume;
setlocale(LC_ALL, "Portuguese");

printf("Digite a altura do cilíndro: ");
scanf("%f", &altura);

printf("Digite o raio do cilíndro: ");
scanf("%f", &raio);

    volume = raio * raio * altura * 3.14;

    printf("O volume do cilíndro é %.1f", volume);
    getch();
}
