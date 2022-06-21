#include <stdio.h>
#include <locale.h>

float mediaA(float vetor[2]){
float result=0.0;

    for(int i=0; i<=2; i++){
        result += vetor[i];
            }
    result = result/3;
    return result;
}
float mediaP(float vetor[2]){
float result;

    result = ( vetor[0]*5 + vetor[1]*3 + vetor[2]*2 ) / 10;
    return result;
}

float main(){
float vetor[2];
char media[1];
setlocale(LC_ALL, "Portuguese");
    printf("Digite as notas: \n");
    for(int i=0; i<=2; i++){
        scanf("%f", &vetor[i]);
    }

    printf("\nDigite qual média voce quer saber: \n(A) Média Aritmética\n(P) Média Ponderada\n");
    scanf("%s", media);

    if(media[0]=='A' || media[0]=='a'){
        printf("\nA media aritmetica foi: %.2f", mediaA(vetor));

    }else if (media[0]=='P' || media[0]=='p'){
        printf("\nA media aritmetica foi: %.2f", mediaP(vetor));
    }else{
        printf("Esta não foi uma opção válida.");
    }
}
