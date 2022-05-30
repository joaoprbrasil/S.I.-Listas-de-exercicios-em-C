#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
3.Em um concurso de miss IFMA, os jurados precisam digitar o nome das 16
candidatas e suas respectivas notas (0 a 10). Crie um programa que leia estas
informações e que, ao final do programa, apresente apenas o nome e a nota da
vencedora.
*/
int main(){
int i=1, empates=0, j;
float nota, notavencedora, notaempate;
char nome[100], vencedora[100], nomeempate[100];
setlocale(LC_ALL, "Portuguese");

    while(i <= 3){
		printf("\nDigite o nome da %d° participante: ", i);
		scanf("%s", nome);
		printf("Digite a nota desta participante: ");
		scanf("%f", &nota);

		if(nota > 10){
            printf("As notas das candidatas são de 0 a 10.");
            nota=0;
            i--;
		}
        if(i == 1){
            notavencedora = nota;
            for(int i =0; i < 100; i++){
                vencedora[i] = nome[i];
            }
			i++;
        }
            else{
                if(notavencedora == nota){
                notaempate = notavencedora;
                for(int i =0; i < 100; i++){
                    nomeempate[i]  = nome[i];
                }
                empates++;
				i++;
                }
                else{
                    if(nota > notavencedora){
                    notavencedora = nota;
                    for(int i =0; i < 100; i++){
                        vencedora[i]  = nome[i];
                    }
                    i++;
                    }
                    else
                    i++;

                    }
                }
            }

    if(notavencedora == notaempate){
        printf("\nHouve um empate entre a candidata ");
            for(int i =0; i < nomeempate[i]; i++){
                printf("%c", nomeempate[i]);
            }
        printf(" e a candidata ");
            for(int i =0; i < vencedora[i]; i++){
                printf("%c", vencedora[i]);
            }
    }
        else{
            printf("\nA vencedora foi ");
                for(int i =0; i < vencedora[i]; i++){
                    printf("%c", vencedora[i]);
                }
            printf(" com a nota %.1f", notavencedora);
		  }


}
