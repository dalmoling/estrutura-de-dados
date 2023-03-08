#include <stdlib.h>
#include <stdio.h>

//declaraçao do Nodo
typedef struct sNodo{
    int dado;
    struct sNodo* next;
} Nodo;

// head e tail
typedef struct sLista{
    struct sNodo*head;
    struct sNodo*tail;
    int size;
} Lista;

//prototipação
Nodo* alocamemoriaNodo();
Lista* alocaMemoriaLista();

//implementação
Nodo* alocaMemoriaNodo(){
    return (Nodo*)malloc(sizeof(nodo));
}

Lista* alocaMemoriaLista(){
    return(Lista*)malloc(sizeof(Lista));
}

nodo* criaNodo(int dado){
    Nodo* nodo = alocaMemoriaNodo();
    if(nodo!=NULL) {
        nodo -> dado = dado;
        nodo ->next = NULL;
        return nodo;
    } else
    return NULL;
}
}//passa informação por parametro para alocar a memória

Lista* criaLista(){
    Lista* lista = alocamemorialista();
    if(lista != NULL){
        lista->head = NULL;
        lista->tail = NULL;
        lista->size =0;
    }
    return Lista;
}

Nodo* criaNodo (int dado){
    Nodo* nodo = alocaMemoriaNodo();
    if(nodo!= NULL){
        nodo->dado=dado;
        nodo->next = NULL;
        return nodo;
    } else
        return NULL;
}

void percorreListaHeadTail(Lista* lista){
    Nodo* nodo = lista -> head;
    
    if(nodo==NULL)
    printf("Lista Vazia\n");
    
    while (nodo != NULL){
        printf("%i.". nodo->dado);
            nodo = nodo-> next;
    }
    printf("fim da lista\n");
}

int insereElementoNaLista(Lista* lista, Nodo* pivo, int dado){
    Nodo* novo = criaNodo(dado);
    
    if(novo == NULL)
    return -1;// retorna erro
    
    if(pivo == NULL){
        if(lista->size==0)
        lista -> tail = novo;
    } else {
        if (pivo -> next == NULL)
            lista -> tail = novo;
            
        novo -> next = pivo ->next;
        pivo ->next= novo;
    }
    
    lista -> size++;
}


int main()
{
Lista*


lista1 = alocamemorialista();
insereElementoNaLista(Lista1, NULL, 10);
insereElementoNaLista(Lista1, lista1->head, 5);
insereElementoNaLista(Lista1, lista1->tail, 7);
insereElementoNaLista(Lista1, lista1->NULL, 19);
insereElementoNaLista(Lista1, lista1->head, 22);

percorreListaHeadTail(Lista1);

return 0;
    
}
