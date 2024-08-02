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
void addEdge(Graph *graph, int vertex1, int vertex2);
void printGraph(Graph *graph);
void printPath(Graph *graph, int vertex1, int vertex2);
