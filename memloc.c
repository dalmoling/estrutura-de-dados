#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  N 10

int main() {
  srand(time(NULL));
  int *vet,i;
  
  //alocaçao dinamica do vetor
  vet = (int*) malloc(sizeof(int) * N);
  
  //procedimento para carregar o vetor
  for(i=0;i<N;i++){
      vet[i]= rand()%100;
  }
  
  //procedimento para escrever o vetor
   for(i=0;i<N;i++){
       printf("Valor %i \n",vet[i]);
   }
}
