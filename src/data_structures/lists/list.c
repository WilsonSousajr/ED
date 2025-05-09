#include <stdio.h>
#include "list.h"

List* create_list(){
    List* l = (List*)malloc(sizeof(List));

    if(l != NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }

    l->head = NULL;
    l->size = 0;
    return l;
}

void add(List* l, int item){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    
    newNode->data = item;
    newNode->next = l->head;
    l->head = newNode;
    l->size++;
}

int removeItem(List* l, int item){
    Node* current = l->head;
    Node* previous = NULL;

    while(current != NULL){
        if(current->data == item){
            if(previous == NULL){
                l->head = current->next;
            }
            else{
                previous->next = current->next;
            }
            free(current);
            l->size--;
            return 1;
        }
        previous = current;
        current = current->next;
    }
    return 0;
}


int search(List* l, int item){
   
}

int isEmpty(List* l){
    if(l->head == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void append(List* l, int item){
    
}

int index(List* l, int item){

}

int insert(List* l, int pos, int item){

}

int insertSorted(List* l, int item){

}

int pop(List* l){

}

int popAt(List* l, int pos){

}

void printList(List* l){
    Node* current = l->head;
    while (current != NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int freeList(List* l){

}

