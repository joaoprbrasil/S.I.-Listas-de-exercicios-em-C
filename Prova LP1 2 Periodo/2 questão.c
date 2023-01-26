/*
Faça um programa em C, que leia o nome, email e as notas n1, n2, n3 de N alunos. O programa deve 
imprimir o nome e email do aluno com maior média da turma e calcular a média geral da turma. O 
cálculo da média deve ser implementado obrigatoriamente como uma função e sugere-se usar uma 
struct aluno para armazenar o nome e email dos alunos.
*/

#include <stdio.h>

int main(void){

  float media(float *notas, int n);
  
  int N;

  printf("Digite a quantidade de alunos.\n> ");
  scanf("%d", &N);
  
struct aluno{

  char nome[50];
  char email[100];
  float notas[3];
  
}tipo_aluno[N];


  for(int i=0; i<N; i++){
    printf("Digite o nome do %d° aluno.\n> ", i+1);
    scanf(" %49[^\n]", tipo_aluno[i].nome);
    
    printf("Digite o email deste aluno.\n> ");
    scanf(" %99[^\n]", tipo_aluno[i].email);

    for(int j=0; j<3; j++){
      printf("Digite a %dª nota deste aluno.\n> ", j+1); 
      scanf("%f", &tipo_aluno[i].notas[j]);
        while ( tipo_aluno[i].notas[j] > 10 || tipo_aluno[i].notas[j] < 0){
          printf("Digite uma nota válida de 0 a 10.\n> ");
          scanf("%f", &tipo_aluno[i].notas[j]);
        } 
    }
  }

  int melhorAluno=0;
  float melhorMedia=0, mediaTurma = 0;

  for(int i=0; i<N; i++){
    mediaTurma += media(tipo_aluno[i].notas, 3);
    if((media(tipo_aluno[i].notas, 3)) > melhorMedia){
      melhorAluno = i;
      melhorMedia = media(tipo_aluno[i].notas, 3);
    }
  }
  mediaTurma = mediaTurma / N;

  printf("\n\nO %d° aluno teve a melhor média\n", melhorAluno+1);
  printf("Nome: %s\n", tipo_aluno[melhorAluno].nome);
  printf("Email: %s\n", tipo_aluno[melhorAluno].email);
  printf("Média: %.1f\n", media(tipo_aluno[melhorAluno].notas, 3));
  printf("Média geral da turma: %1.f\n", mediaTurma);  

  return 0;
}

float media(float *notas, int n){

  float soma=0;
  
  for(int i=0; i<n; i++){
    soma+=notas[i];
  }

  float m = soma / n ;
  
  return m; 
}

