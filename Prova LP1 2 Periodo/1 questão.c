// https://olimpiada.ic.unicamp.br/pratique/pj/2014/f2/sinuca/ 

#include<stdio.h>

int main(void){

int N;

  scanf("%d", &N);

int bolas[N];

  for(int i=0; i<N; i++){
    scanf("%d", &bolas[i]);
  }

  for(int j=0; j<N-1; j++){
    for(int i=0; i<N; i++){
      if(bolas[i] == bolas[i+1]){
        bolas[i] = 1;
        }else{
        bolas[i] = -1;
        }
      }
  }

  if(bolas[0] == '1'){
    printf("preta");
  }else{
    printf("branca");
  }
  
  
return 0;
}