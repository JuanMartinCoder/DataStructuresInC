#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

typedef struct {
  node *first, *last;
} T_queue;

T_queue create_queue();
int isEmpty(T_queue Q);
void insert(T_queue *Q, int data);
void remove_element(T_queue *Q, int *data);
int peek(T_queue Q);
void printQueue(T_queue Q);
void destroyQueue(T_queue *Q);
