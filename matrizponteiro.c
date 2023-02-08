// Exemplo de ponteira em C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  N 10

int main() {
    int**ma;
 int alocaMemoriaMatriz (int,int);
 void carregaMatriz(int**);
 void escreveMatriz(int**);
 void liberaMemoria(int**);

int** alocaMemoriaMatriz(int linhas, int colunas){
    int** ma, col;
    ma = (int**) malloc(sizeof(int*)*linhas);
    for(col=0;col<colunas;col++){
        ma[col] = (int*) malloc (sizeof(int) * colunas);    
    }
    return ma;
}
    

    void liberaMemoria(int ma, int linhas){
    int lin;
    for(lin=0;lin<linhas;lin++) {
        free(ma[lin]);
    }
    free(ma);
}
