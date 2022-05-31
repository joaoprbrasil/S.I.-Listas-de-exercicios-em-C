#include<stdio.h>
#include<locale.h>
/*
2.Fazer um programa para encontrar todos os números pares entre 1000 e 2000.
*/
int main(){
    for(int i=1000; i<=2000; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
}
