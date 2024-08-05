#include "stack.h"

Stack createStack() {
  Stack stack = NULL;
  return stack;
}
void push(Stack *stack, int data) {
  Stack newNode = (Stack)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = *stack;
  *stack = newNode;
}

void pop(Stack *stack, int *data) {
  Stack temp;
  if (*stack) {
    temp = *stack;
    *data = (*stack)->data;
    *stack = (*stack)->next;
    free(temp);
  }
}

int top(Stack stack) {
  if (stack)
    return stack->data;
  else
    return -1;
}

int isEmpty(Stack stack) { return stack == NULL; }

void printStack(Stack *stack) {
  int data;
  if (!isEmpty(*stack)) {
    pop(stack, &data);
    printf("%d\n", data);
    printStack(stack);
    push(stack, data);
  }
}

void destroyStack(Stack *stack) {
  Stack temp;
  while (*stack) {
    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
  }
}
