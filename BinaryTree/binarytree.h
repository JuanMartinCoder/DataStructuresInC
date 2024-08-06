#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *left;
  struct node *right;
} node;

typedef node *Tree;

void addNode(Tree *root, int data);
int getHeight(Tree root);
void addNode_BST(Tree *root, int data);
int getMaximumBST(Tree root);
int getMinimumBST(Tree root);
void printTree_PreOrder(Tree root);
void printTree_Inorder(Tree root);
void printTree_PostOrder(Tree root);
