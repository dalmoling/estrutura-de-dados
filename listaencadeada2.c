// Lista encadeada dupla exemplo

#include <stdio.h>
#include <stdlib.h>

// Define a estrutura de cada nó da lista
typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} Node;

// Cria uma nova instância de nó
Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

// Insere um nó no final da lista
void append(Node **head, int data) {
    Node* node = newNode(data);
    Node* current = *head;
    if (current == NULL) {
        *head = node;
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
        node->prev = current;
    }
}

// Remove um nó da lista
void removeNode(Node **head, Node *node) {
    if (*head == node) {
        *head = node->next;
    }
    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    free(node);
}

// Imprime os valores da lista
void printList(Node *head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("Lista completa: ");
    printList(head);

    removeNode(&head, head);
    printf("Lista após remover o primeiro nó: ");
    printList(head);

    removeNode(&head, head->next);
    printf("Lista após remover o segundo nó: ");
    printList(head);

    return 0;
}
