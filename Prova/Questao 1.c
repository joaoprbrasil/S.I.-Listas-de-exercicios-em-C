#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Questão 1) Faça um programa que leia a temperatura de uma cidade em uma semana. O
programa deverá conter:
O programa deve conter:
- Inserir temperaturas
- Exibir temperaturas
- Limpar registro de temperaturas:
- Exibir temperaturas em Fahrenheit
- Exibir a média das temperaturas da semana
- O programa deverá encerrar ao digitar a zero.
*/
int main(){
int escolha=-1, i, k=0;
float C[6], F[6], soma=0, media;
setlocale(LC_ALL, "Portuguese");


    while(escolha!=0){
    printf("\n============Medidor============\n1 - Inserir temperaturas C°\n2 - Exibir temperaturas\n3 - Limpar temperaturas\n4 - Exibir temperaturas em F°\n5 - Média das temperaturas\n0 - Encerrar o programa\n===============================");
    printf("\nEscolha uma opção >");
    scanf("%d", &escolha);

        if(escolha == 1){ //Inserir temperaturas
            system("cls");
            printf("Digite as 7 temperaturas da semana: ");
                for(i=0; i<7; i++){
                    printf("\n%d° temperatura:", i+1);
                    scanf("%f", &C[i]);
                    soma+=C[i];
                }
            media = soma / 7;
            k++;
        }

        if(escolha == 2){ //Exibir temperaturas
            system("cls");
            if(k>0){
                printf("As temperaturas são:");
                for(i=0; i<=6; i++){
                    printf("\n %.1f C°", C[i]);
                }
            }
                else{   //Caso o usuário não inserir nenhuma temperatura
                    printf("Você deve primeiro inserir as temperaturas.");
                }
        }

        if(escolha == 3){ //Limpar temperaturas
            system("cls");
            for(i=0; i<=6; i++){
                C[i]=0;
                media=0;
                soma=0;
            }
            k=0;
            printf("As temperaturas foram limpadas.");
        }

        if(escolha == 4){ //Exibir temperaturas em F°
            system("cls");
            if(k>0){
                printf("As temperaturas convertidas em F° são:");
                for(i=0; i<=6; i++){
                    F[i]=(C[i] * 9/5) + 32;
                    //(°C × 9/5) + 32
                    printf("\n%.1f F°", F[i]);
                }
            }
                else{
                    printf("Você deve primeiro inserir as temperaturas.");
                }

        }

        if(escolha == 5){
            system("cls");
            if(k>0){
                printf("A média das temperaturas é %.2f C°", media);
            }
                else{
                    printf("Você deve primeiro inserir as temperaturas.");
                }
        }

    }
}
