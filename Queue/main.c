#include "queue.h"

int main() {
  T_queue Q = create_queue();
  insert(&Q, 1);
  insert(&Q, 2);
  insert(&Q, 3);
  insert(&Q, 4);
  insert(&Q, 5);
  insert(&Q, 6);
  printQueue(Q);
  destroyQueue(&Q);
  return 0;
}
