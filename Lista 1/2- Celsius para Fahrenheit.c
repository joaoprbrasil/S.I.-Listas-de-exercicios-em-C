#include<stdio.h>
#include<locale.h>

int main(){
float celsius, fahrenheit;
setlocale(LC_ALL, "Portuguese");

    printf("Escreva uma temperatura em Celsius para convertê-la em Fahrenheit: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("A temperatura %.1f°C resulta em %.1f°F.\n", celsius, fahrenheit);
    getch();
}
