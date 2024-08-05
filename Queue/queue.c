#include "queue.h"

T_queue create_queue() {
  T_queue Q;
  Q.first = Q.last = NULL;
  return Q;
}

int isEmpty(T_queue Q) { return Q.first == NULL; }
void insert(T_queue *Q, int data) {
  node *new_node = (node *)malloc(sizeof(node));
  new_node->data = data;
  new_node->next = NULL;
  if ((*Q).first == NULL)
    (*Q).first = new_node;
  else
    (*Q).last->next = new_node;
  (*Q).last = new_node;
}
void remove_element(T_queue *Q, int *data) {
  node *aux;
  if ((*Q).first != NULL) {
    aux = (*Q).first;
    *data = aux->data;
    (*Q).first = (*Q).first->next;
    if ((*Q).first == NULL)
      (*Q).last = NULL;
    free(aux);
  }
}
int peek(T_queue Q) {
  if (Q.first != NULL)
    return Q.first->data;
  else
    return -1;
}
void printQueue(T_queue Q) {
  if (Q.first != NULL) {
    while (Q.first != NULL) {
      printf("%d ", Q.first->data);
      Q.first = Q.first->next;
    }
    printf("\n");
  }
}

void destroyQueue(T_queue *Q) {
  node *aux;
  while ((*Q).first != NULL) {
    aux = (*Q).first;
    (*Q).first = (*Q).first->next;
    free(aux);
  }
}
