#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX 100

typedef struct nodoL {
  int vertex;
  int distance;
  struct nodoL *next;
} nodoL;

typedef nodoL *T_List;

typedef struct Graph {
  int vertex_count;
  T_List *list;
} Graph;

Graph *createGraph(int vertex_count);
void addEdge(Graph *graph, int vertex_A, int vertex_B, int distance);
void printGraph(Graph *graph);
void readFiletoGraph(Graph *graph, FILE *file);
