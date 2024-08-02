#include "graph.h"

Graph *createGraph(int vertex_count) {
  Graph *graph = (Graph *)malloc(sizeof(Graph));
  graph->vertex_count = vertex_count;
  graph->list = (T_List *)malloc(vertex_count * sizeof(nodoL));
  return graph;
}

void addEdge(Graph *graph, int vertex_A, int vertex_B, int distance) {
  T_List new = (T_List)malloc(sizeof(nodoL));
  new->vertex = vertex_B;
  new->distance = distance;
  new->next = graph->list[vertex_A];
  graph->list[vertex_A] = new;
}

void readFiletoGraph(Graph *graph, FILE *file) {
  int vertex_A, vertex_B, distance;
  fscanf(file, "%d %d %d\n", &vertex_A, &vertex_B, &distance);
  while (!feof(file)) {
    addEdge(graph, vertex_A, vertex_B, distance);
    fscanf(file, "%d %d %d\n", &vertex_A, &vertex_B, &distance);
  }
  fclose(file);
}

void printGraph(Graph *graph) {
  for (int i = 0; i < graph->vertex_count; i++) {
    printf("%d -> ", i);
    T_List list = graph->list[i];
    while (list != NULL) {
      printf("%d ", list->vertex);
      list = list->next;
    }
    printf("\n");
  }
}
