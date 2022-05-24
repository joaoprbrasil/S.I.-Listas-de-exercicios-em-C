#include<stdio.h>
#include<locale.h>

//Programa que dobra números positivos e triplica números negativos.

int main(){
int num;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um número qualquer positivo ou negativo: ");
    scanf("%d", &num);

    if(num>0){
        num*=2;
        printf("O número duplicado é igual a %d.", num);
    }
        else{
            num*=3;
            printf("O número triplicado é igual a %d.", num);
        }
getch();
}
