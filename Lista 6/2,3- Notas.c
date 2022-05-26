#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
2.Faça um programa que permita aos espectadores de um cinema avaliarem um
determinado filme com essas notas, até que a opção 5 seja digitada (opção de
parada). Não permita que notas inválidas sejam atribuídas – se um usuário não
inserir uma nota válida, peça para ele repetir a votação

3.Altere o programa para que o usuário possa errar na votação por, no máximo, três
vezes. Acima disso, o programa deve alertar o usuário sobre o ocorrido e pedir
para ele passar a vez para o próximo espectador.
*/
int main()
{
    int nota,n1=0,n2=0,n3=0,n4=0, j=0;
    setlocale(LC_ALL, "Portuguese");


    printf("Dê uma nota ao cinema de 1 a 4.\n 1)(muito ruim) \n 2(ruim) \n 3)(bom) \n 4)(muito bom)  \nDigite 5:para parar a avaliação.\n");
    for(int i=0; i>=0; i++)
    {
        scanf("%d", &nota);
        switch(nota)
        {
        case 1:
            n1++;
            break;

        case 2:
            n2++;
            break;

        case 3:
            n3++;
            break;

        case 4:
            n4++;
            break;
        case 5:
            system("cls");
            printf("A quantidade de notas respctivamente são:\n 1)(muito ruim) - %d \n 2(ruim) - %d \n 3)(bom) - %d \n 4)(muito bom) - %d\n",n1,n2,n3,n4);
            return 0;
        default:
            j++;
            printf("Digite uma nota valida.\n");
            if(i>2)
            {
                printf("\nVocê digitou três vezes uma nota inválida, passe a sua vez para outro espectador.");
            }

        }
    }



}
