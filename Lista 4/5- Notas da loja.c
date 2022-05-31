#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
5. Uma loja deseja fazer a avaliação com base na opinião de seus clientes. Para isto,
ela irá disponibilizar um computador que irá perguntar a cada cliente a sua idade e
a nota que ele avalia a loja. Você deverá elaborar o programa de computador que
fará a leitura da opinião dos 100 primeiros clientes e deverá informar os dados
solicitados abaixo:
Notas Informações
A - Ótimo       1. A quantidade de respostas A (Ótimo);
B - Bom         2. A média de idade das pessoas que responderam D (Ruim);
C - Regular     3. A percentagem de respostas E (Péssimo) e a menor idade de quem informou esta resposta;
D - Ruim        4. A maior idade de quem respondeu A (Ótimo) e a maior idade de quem respondeu D (Ruim);
E - Péssimo
*/
int main(){
int i=0, idade=0, somaD=0, maioridadeA=0, maioridadeD=0, menoridadeE=0;
int A=0, D=0, E=0;
float mediaD, percentagemE;
char nota;
setlocale(LC_ALL, "Portuguese");

    printf("Avaliação da Loja.\nNotas:\nA - Ótimo\nB - Bom\nC - Regular\nD - Ruim\nE - Péssimo\n");
    while(i<100){
        printf("\nVocê é o %d° cliente, agora digite a sua nota: ", i+1);
        scanf("%s", &nota);
        printf("Agora digite a sua idade: ");
        scanf("%d", &idade);

            if(nota == 'a' || nota == 'A'){
                A++;
                if(idade>maioridadeA){
                    maioridadeA=idade;
                }
            }
            if(nota == 'd' || nota == 'D'){
                D++;
                somaD += idade;
                mediaD = somaD / D;
                    if(idade>maioridadeD){
                        maioridadeD=idade;
                    }
            }
            if(nota == 'e' || nota == 'E'){
                E++;
            }
        i++;
    }
    percentagemE = (E * 100) / i;

    system("cls");
    printf("\nA quantidade de respostas A foi %d.", A);
    printf("\nA média de idade das pessoas que responderam D é %.1f.", mediaD);
    printf("\nA percentagem de respostas E foi %.1f%% e a menor idade de quem informou esta resposta foi %d anos.", percentagemE, menoridadeE);
    printf("\nA maior idade de quem respondeu A foi %d anos e a maior idade de quem respondeu D foi %d.", maioridadeA, maioridadeD);
return 0;
}

