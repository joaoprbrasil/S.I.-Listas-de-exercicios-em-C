#include<stdio.h>
#include<locale.h>
/*
Desenvolver um algoritmo que leia a altura de 10 pessoas. Este programa deverá
calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;
*/
int main(){
int i;
float menoraltura, maioraltura, altura;

    printf("Digite a altura de dez pessoas:\n");
    for(i=0; i<10; i++){
    scanf("%f", &altura);
        if(i==0){
            maioraltura=altura;
            menoraltura=altura;
        }
        if(i!=0 && altura>maioraltura){
            maioraltura=altura;
        }
        if(i!=0 && altura<menoraltura){
            menoraltura=altura;
        }
    }
    printf("\nA maior altura do grupo é: %.2f \nA menor altura do grupo é: %.2f", maioraltura, menoraltura);
}
