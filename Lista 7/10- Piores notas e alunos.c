#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida,
escreva o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja
pior nota foi na prova 2, e o número de alunos cuja pior nota foi na prova 3. Em
caso de empate das piores notas de um aluno, o critério de desempate é
arbitrário, mas o aluno deve ser contabilizado apenas uma vez.
*/
int main(){
int i=0, j, piornota[3], pioraluno[3];
float mtz[10][3];
setlocale(LC_ALL, "Portuguese");

    printf("Digite a nota dos 10 alunos na primeira prova: ");
        for(j=0; j<10; j++){
            scanf("%f", &mtz[i][j]);
                if(j==0){
                    pioraluno[0]=1;
                    piornota[0]=mtz[i][j];
                }
                if(piornota[0]>mtz[i][j]){
                    pioraluno[0]=j+1;
                    piornota[0]=mtz[i][j];
                }
        }
    i++;

    printf("Digite a nota dos 10 alunos na segunda prova: ");
        for(j=0; j<10; j++){
            scanf("%f", &mtz[i][j]);
                if(j==0){
                    pioraluno[1]=1;
                    piornota[1]=mtz[i][j];
                }
                if(piornota[1]>mtz[i][j]){
                    pioraluno[1]=j+1;
                    piornota[1]=mtz[i][j];
                }
        }
    i++;

    printf("Digite a nota dos 10 alunos na terceira prova: ");
        for(j=0; j<10; j++){
            scanf("%f", &mtz[i][j]);
                if(j==0){
                    pioraluno[2]=1;
                    piornota[2]=mtz[i][j];
                }
                if(piornota[2]>mtz[i][j]){
                    pioraluno[2]=j+1;
                    printf("%d", pioraluno[2]);
                    piornota[2]=mtz[i][j];
                }
        }
    for(i=0; i<3; i++)
    printf("\nO %d° aluno com a nota %d obteve a pior nota na %dª prova.", pioraluno[i], piornota[i], i+1 );

}
