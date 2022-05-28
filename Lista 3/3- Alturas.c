#include<stdio.h>
#include<locale.h>
/*
3. Marcos tem 1,50 metro e cresce 2 centímetros por ano, enquanto Lucas tem 1,10
metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima
quantos anos serão necessários para que Lucas seja maior que Marcos.
*/
int main(){
int anos=0;
float alturamarcos=1.50, alturalucas=1.10;
setlocale(LC_ALL, "Portuguese");

    while(alturamarcos > alturalucas){
        alturamarcos += 0.02;
        alturalucas += 0.03;
        anos++;
    }
    printf("Vai demorar %d anos para que Lucas tenha %.2f de altura e seja maior que Marcos com %.2f de altura.", anos, alturalucas, alturamarcos);
return 0;
}
