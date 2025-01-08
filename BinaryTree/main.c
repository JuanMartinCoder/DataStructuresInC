#include "binarytree.h"

int main() {

  Tree a;

  addNode(&a, 5);
  addNode(&a->left, 8);
  addNode(&a->left->left, 3);
  addNode(&a->left->right, 6);
  addNode(&a->right, 4);
  addNode(&a->right->left, 1);
  addNode(&a->right->left->right, 2);

  // Breadth First Search
  printf("Breadth First Search: ");
  printTree_BFS(a);
  return 0;
}
