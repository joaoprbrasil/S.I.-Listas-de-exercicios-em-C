#include<stdio.h>
#include<locale.h>

main(){
int gb, mb;
setlocale(LC_ALL, "Portuguese");

printf("Escreva o valor em GB para converter-lo em MB: ");
    scanf("%d", &gb);

		mb = gb * 1024;

        printf("%d GB equivalem a %d MB", gb, mb);
        getch();
}

