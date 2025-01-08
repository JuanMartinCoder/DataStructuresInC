#include <stdio.h>
#include <stdlib.h>

typedef struct nodeT {
  int data;
  struct nodeT *left;
  struct nodeT *right;
} nodeT;

typedef nodeT *Tree;

typedef struct node {
  nodeT data;
  struct node *next;
} node;

typedef struct {
  node *first, *last;
} T_queue;

// Aux functions: Queue for BFS
T_queue create_queue();
int isEmpty(T_queue Q);
void insert(T_queue *Q, nodeT data);
void remove_element(T_queue *Q, nodeT *data);
int peek(T_queue Q);
void printQueue(T_queue Q);
void destroyQueue(T_queue *Q);

void addNode(Tree *root, int data);
int getHeight(Tree root);
void addNode_BST(Tree *root, int data);
int getMaximumBST(Tree root);
int getMinimumBST(Tree root);
void printTree_PreOrder(Tree root);
void printTree_Inorder(Tree root);
void printTree_PostOrder(Tree root);
void printTree_BFS(Tree root);
