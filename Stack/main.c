#include "stack.h"

int main() {
  Stack S = createStack();

  push(&S, 1);
  push(&S, 2);
  push(&S, 3);
  push(&S, 4);
  push(&S, 5);
  push(&S, 6);

  printStack(&S);
  return 0;
}
