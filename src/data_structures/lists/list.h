#ifndef LIST_H
#define LIST_H

typedef struct Node{
    int data;
    struct Node* next;
} Node;

typedef struct List{
    Node* head;
    int size;
} List;

List* create_list();
void add(List* l, int item);
int removeItem(List* l, int item);
int search(List* l, int item);
int isEmpty(List* l);
void append(List* l, int item);
int index(List* l, int item);
int insert(List* l, int pos, int item);
int insertSorted(List* l, int item);
int pop(List* l);
int popAt(List* l, int pos);
void printList(List* l);
int freeList(List* l);

#endif 

