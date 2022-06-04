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
int i=0, j=0, piornota[3], pioraluno[3];
float mtz[10][3];
mtz[i][j]=0;
setlocale(LC_ALL, "Portuguese");

    for(j=0; j<3; j++){
        system("cls");
        printf("Digite a nota dos 10 alunos na %d° prova\n:", j+1);
            for(i=0; i<10; i++){
                scanf("%f", &mtz[i][j]);            //Leitor das 10 notas na primeira prova
                    if(i==0){
                        pioraluno[j]=i+1;
                        piornota[j]=mtz[i][j];
                    }
                    if(mtz[i][j]<piornota[j]){
                        pioraluno[j]=i+1;           //Vetor da pior nota e do pior aluno da prova
                        piornota[j]=mtz[i][j];
                    }
            }
    }
    system("cls");
    for(j=0; j<3; j++)                             //Printf do pior aluno, sua pior nota da turma e em qual prova
        printf("\nO %d° aluno com a nota %d obteve a pior nota na %dª prova.", pioraluno[j], piornota[j], j+1 );
}

