#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;
typedef node *Stack;

Stack createStack();
void push(Stack *stack, int data);
void pop(Stack *stack, int *data);
int top(Stack stack);
int isEmpty(Stack stack);
void printStack(Stack *stack);
void destroyStack(Stack *stack);
