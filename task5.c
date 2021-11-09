// Задача 5. Напишете произволна програма, която демонстрира уменията ви 
// да боравите с указатели към структури. Нека декларираната от вас 
// структура(и) съдържа указател към собствения си тип.

#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void freeNodes(Node *head) {
    Node *freePtr = head;
    while (head != NULL)
    {
        freePtr = head;
        head = head->next;
        free(freePtr);
    }
}

void getValue(int id, Node *ptr) {
    printf("Please enter value for element %d: ", id+1);
    scanf("%d", &(ptr->data));
}

void printList(Node *head) {
    Node *ptr = head;
    while (ptr != NULL){
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    };
    printf("\b\b ");
}

int main() {
    int sizeOfList = 0;
    Node *head;
    Node *tail;
    printf("Enter the size of your list: ");
    scanf("%d", &sizeOfList);
    if (sizeOfList > 0)
    {
        head = (Node*) malloc(sizeof(Node));
        tail = head;
        tail->next = NULL;
        getValue(0, head);
    }
    for (int i = 1; i < sizeOfList; i++)
    {
        tail->next=(Node*) malloc(sizeof(Node));
        getValue(i, tail->next);
        tail=tail->next;
        tail->next = NULL;
    }
    printList(head);
    freeNodes(head);
    return 0;
}