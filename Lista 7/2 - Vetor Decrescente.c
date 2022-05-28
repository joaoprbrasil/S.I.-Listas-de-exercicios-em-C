#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura.

int main(){
int vetor, i;
setlocale(LC_ALL, "Portuguese");

    printf("Digite a quantidade de números do vetor: ");
        scanf("%d", &vetor);                             //Leitor da quantidade de números no vetor.
system("cls");
    if(vetor<=0){
        printf("Não é válido um vetor com esta quantidade.");
        return 0;                                       //Condição de parada caso o vetor seja menor ou igual a 0.
    }

    printf("Digite os %d números: ", vetor);
    int v[vetor];
        for(i=0; i<vetor; i++){                         //Leitor de números no vetor.
        scanf("%d", &v[i]);
        }

    printf("\nO vetor em ordem decrescente:\nV = ");
        for(i= vetor - 1;   i >= 0; i--){
            printf(" %d ", v[i]);                        //Printf números do vetor.
        }

return 0;
}
