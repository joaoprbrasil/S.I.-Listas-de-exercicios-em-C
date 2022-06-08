#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
3. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u)
possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua
todas as vogais da palavra dada por esse caractere.
*/
int main(){
char carac[1], palavra[100], aeio[11]={'A','E','I','O','U','a','e','i','o','u'};
int i,j, con=0;
setlocale(LC_ALL, "Portuguese");

    printf("Digite uma palavra para o programa mostrar ela ao contrario: ");
    gets(palavra);
    printf("Digite um caractere para substituir as vogais: ");
    gets(carac);

        for(i=0; i<strlen(palavra); i++){
            for(j=0; j<=10; j++){
                if(palavra[i] == aeio[j]){
                    palavra[i] = carac[0];
                    con++;
                }
            }
        }
    printf("\n%s", palavra);
    printf("\nHá %d vogais.", con);
    return 0;
}
