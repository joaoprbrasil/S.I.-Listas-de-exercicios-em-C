#include<stdio.h>
#include<windows.h>
#include<locale.h>
#define F 10
#define C 10
/*
Implemente ou crie um programa em C que receba do usuário dez temperaturas em
graus Farenheit, transforme-as em graus Celsius e armazene os resultados em um
vetor. Terminada a entrada de dados, os valores armazenados devem ser
apresentados.
*/
int main(){
int i;
float v[F], z[C], celsius=0;
setlocale(LC_ALL, "Portuguese");

    printf("Escreva dez temperaturas em Fahrenheit para converter em Celsius:\n");
    for(i=0; i<F; i++){
        scanf("%f", &v[i]);     //Leitor das temperaturas
        z[i] = v[i];

    }
system("cls");
    printf("Fahrenheit      |       Celsius     ");
    for(i=0; i<C; i++){
            //Conversão
        celsius = (v[i] - 32) * 5 / 9;
        printf("\n%.1f F°         |       %.1f C°", v[i], celsius);     //printf das temperaturas
    }
}
