#include "graph.h"
#include <stdio.h>

int main() {
  FILE *file = fopen("graph.txt", "r");
  Graph *g = createGraph(5);
  readFiletoGraph(g, file);
  printGraph(g);

  return 0;
}
