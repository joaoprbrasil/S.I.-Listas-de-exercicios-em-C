#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Questão 2) Implemente um programa que siga os requisitos a seguir:
1. O algoritmo deve contemplar o armazenamento de estoque para 5 produtos: água,
refrigerante, vinho, suco e cerveja. Utilize um vetor para armazenar a quantidade de
cada produto (Um produto em cada posição do vetor).
2. Uma venda só pode ser realizada se houver saldo positivo em estoque. Caso
contrário, não haveria como entregar o produto ao cliente na venda. Certifique-se de
não receber um valor de venda negativa.
3. Em caso de uma venda ser bem-sucedida, exibir uma mensagem positiva do
processo. Caso contrário, exibir uma mensagem informando que a venda não pode
ser efetuada.
4. A escolha do produto deve ser feita a partir de um menu de opções a ser exibido ao
usuário que escolhe a opção desejada para em seguida, informar a quantidade
desejada. Utilize a opção 0 (ZERO) para finalizar o estoque.
5. Todos os produtos iniciam com um estoque de 10 produtos, e ao longo das vendas
vão sendo reduzidos estes valores, sem a necessidade de reposição durante a
execução, imaginando que seria a única quantidade possível disponível no momento
em que o algoritmo é executado.
*/
int main(){
int estoque[6]={10,10,10,10,10,10};
int i, produto=-1, qnt;
setlocale(LC_ALL, "Portuguese");

    while(produto!=0){
        printf("\n---------Estoque---------\n1 - Água\n2 - Refrigerante\n3 - Vinho\n4 - Suco\n5 - Cerveja\n0 - Finalizar\n-------------------------");
        printf("\nEscolha um produto para vender: ");
        scanf("%d", &produto);

        if(produto > 0 && produto < 6){
            if(produto != 0){   //O programa mostra quantidade que há no estoque para facilitar a venda
                printf("Há %d disponiveis para venda.\nDigite a quantidade para vender: ", estoque[produto-1]);
                scanf("%d", &qnt);

                //A venda não será efetuada caso o usuário queira vender um número maior que o estoque ou um número negativo
                if(estoque[produto - 1] - qnt < 0 || qnt<0){
                    system("cls");
                    printf("Não foi possível efetuar a venda!\n");
                }
                    else{
                        system("cls");
                        printf("Venda realizada com sucesso!\n");
                        estoque[produto - 1]-=qnt;
                    }
            }
        }
            else{   //Caso o usuário digite um número que não está na tabela
                system("cls");
                printf("Este número não está na tabela.");
            }
    }

    system("cls");  //Tabela mostrando a quantidade restante dos produtos após as vendas
    printf("-------Estoque finalizado-------");
    printf("\nÁgua........................%d", estoque[0]);
    printf("\nRefrigerante................%d", estoque[1]);
    printf("\nVinho.......................%d", estoque[2]);
    printf("\nSuco........................%d", estoque[3]);
    printf("\nCerveja.....................%d", estoque[4]);
    printf("\n------------------------------");

}
