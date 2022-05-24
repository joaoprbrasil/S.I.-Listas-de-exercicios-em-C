#include<stdio.h>
#include<locale.h>

/*
Faça um algoritmo para ler a temperatura atual e conforme leitura, imprimir o resultado de
acordo com a tabela
até 15°         Muito frio
de 16° a 23°    Frio
de 23° a 26°    Agradável
de 26° a 30°    Calor
acima de 31°    Muito quente
*/

int main(){
float temp;
setlocale(LC_ALL, "Portuguese");

    printf("Digite a temperatura atual: ");
    scanf("%f", &temp);

    if(temp > 31)
        printf("A temperatura atual está muito quente.");
         else if(temp > 26)
            printf("A temperatura atual está quente.");
             else if(temp > 23)
                printf("A temperatura atual está agradável.");
                 else if(temp > 15)
                    printf("A temperatura atual está fria.");
                     else
                      printf("A tempertatura atual está muito fria.");
getch();
}
