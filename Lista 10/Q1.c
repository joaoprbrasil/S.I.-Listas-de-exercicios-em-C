#include <stdio.h>

int menor(int x, int y)
{
        if(x < y){
            return x;
        }
        else
        {
            return y;
        }
}

int main(){
int num1, num2, i;

    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("O menor numero e %d", menor(num1,num2));
}
