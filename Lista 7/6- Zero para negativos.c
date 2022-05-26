#include<stdio.h>
#include<windows.h>
#include<locale.h>
#define vetor 10
/*
Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos.
*/
int main(){
int i, v[vetor];
setlocale(LC_ALL, "Portuguese");

    printf("Digite 10 números positivos ou negativos:\n");
    for(i=0; i<vetor; i++){
        scanf("%d", &v[i]);
        if(v[i]<0)
            v[i]=0;
    }
system("cls");

    printf("V =");
    for(i=0; i<vetor; i++){
        printf(" %d", v[i]);
    }
}
