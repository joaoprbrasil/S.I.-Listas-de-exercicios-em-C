#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define num 4
/*
Faça um programa que leia um vetor com 5 inteiros. Exiba um menu de opções, execute a ação
escolhida e exiba o resultado. O programa deve ser capaz de solicitar ao usuário se deseja
realizar uma nova operação. O programa deve encerrar quando o usuário digitar a opção 0
(ZERO), portanto, caso o mesmo digite uma opção inválida, o programa não deve encerrar.
Dado o menu de opções, exiba:
1. O maior valor
2. A média dos valores
3. As posições em que existam valores ímpares
4. Os valores dispostos em ordem inversa
5. Buscar número: informe um número e o procure no vetor preenchido, retornando a posição e
o valor desse número. (retorne -1 caso não encontre)
6. Multiplique os valores pelo inverso de seu índice. (Ex.: se o índice é 2, então o valor deve
ser multiplicado por -2)
*/
int main(){
int v[num], i=0, k=0, maiorvalor=0, soma=0, opcao=-1, impares=0, valor, inverso;
float media;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 5 valores inteiros:\n");
    while(i<=num){
    scanf("%d", &v[i]);
        if(v[i]>maiorvalor){
            maiorvalor = v[i];//Maior valor do vetor
        }
        if(v[i]%2!=0){
            impares++;        //Contador da existência de ímpares no vetor

        }
    soma+=v[i];               //Soma dos 5 valores
    i++;
    }
    media = soma / i;         //Calculo da média após a soma dos 5 valores

    //Tabela de opções
    printf("\n\nEscolha uma das opções:");
    printf("\n( 1 ) - Exibir o maior valor digitado");
    printf("\n( 2 ) - A média dos valores digitados");
    printf("\n( 3 ) - As posições dos valores ímpares");
    printf("\n( 4 ) - Exibir os valores em ordem inversa");
    printf("\n( 5 ) - Mostrar a posição de um número");
    printf("\n( 6 ) - Múltiplicar os valores pelo inverso de seu íncide ");
    printf("\n( 0 ) - Para encerrar o programa.\n:");

    while(opcao!=0){          //O while só encerra quando o usuário digitar 0
        scanf("%d", &opcao);

    switch(opcao){            //Switch das 6 opções
        case 1:
            printf("O maior valor digitado foi %d.\n", maiorvalor);
            printf("Escolha outra opção:\n");
            break;

        case 2:

            printf("A média dos valores digitados é %.2f.\n", media);
            printf("Escolha outra opção:\n");
            break;

        case 3:
            if(impares>0){ //Se impares for maior que 0, então há pelo menos um valor ímpar
                printf("As posições dos valores ímpares são");
                    for(i=0; i<=num; i++){
                        if(v[i]%2!=0){
                            printf("; %d", i+1);
                        }
                    }
            }
                else{     //Caso impares seja igual a zero, então não há valores ímpares
                    printf("Não há valores ímpares no vetor");
                }
            printf(".\nEscolha outra opção:\n");
            break;

        case 4:
            printf("A ordem inversa dos números é:");
            for(i=4; i>=0; i--){
                printf(" %d", v[i]);
            }
            printf("\nEscolha outra opção:\n");
            break;

        case 5:
            k=0;
            printf("Escolha um número para mostrar sua posição caso ele exista no vetor: ");
            scanf("%d", &valor);
            for(i=0; i<=num; i++){
                if(v[i]==valor){
                    k++; // k >=1 há este valor no vetor
                }        // Caso k = 0; então o valor digitado não existe no vetor
            }
            if(k==1){   //Caso haja apenas um número igual ao valor digitado
                printf("A posição deste valor é" );
                for(i=0; i<=num; i++){
                    if(valor==v[i]){
                        printf(" %d.", i+1);
                    }
                }
                printf("\nO valor deste número é: %d", valor);

            }
            if(k==0){   //Caso não haja o valor digitado no vetor
                k=-1;
                printf("Não há este valor no vetor, então a posição deste valor é %d.", k);
            }
            if(k>1){    //Caso haja mais de um número igual ao valor digitado
                printf("Há %d valores no vetor igual ao número digitado.", k);
                printf("\nAs posições desses valores são");
                for(i=0; i<=num; i++){
                    if(valor==v[i]){
                        printf("; %d", i+1);
                    }
                }
                printf(".\nO valor deste número é: %d", valor);
            }
            printf("\nEscolha outra opção:\n");
            break;

        case 6:
            printf("Os valores do vetores multiplicados pelo inverso do seu índice são:");
            for(i=0; i<=num; i++){
                    inverso = v[i] * (-v[i]);
                printf(" %d", inverso);
            }
            printf("\nEscolha outra opção:\n");
            break;

        case 0:
            printf("O programa foi encerrado.");
            break;

        default:
            printf("\nEsta não é uma opção válida.\n");
            printf("Escolha outra opção:\n");
            break;
        }
    }
}
