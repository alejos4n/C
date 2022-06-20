#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
};

int main(){

  //inicializo losnodos
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;

  //se le asigna memoria
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

  //asignar datos a cada nodo
  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  return 0;
  
}
