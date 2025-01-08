#include "binarytree.h"

T_queue create_queue() {
  T_queue Q;
  Q.first = Q.last = NULL;
  return Q;
}

int isEmpty(T_queue Q) { return Q.first == NULL; }
void insert(T_queue *Q, nodeT data) {
  node *new_node = (node *)malloc(sizeof(node));
  new_node->data = data;
  new_node->next = NULL;
  if ((*Q).first == NULL)
    (*Q).first = new_node;
  else
    (*Q).last->next = new_node;
  (*Q).last = new_node;
}
void remove_element(T_queue *Q, nodeT *data) {
  node *aux;
  if ((*Q).first != NULL) {
    aux = (*Q).first;
    *data = aux->data;
    (*Q).first = (*Q).first->next;
    if ((*Q).first == NULL)
      (*Q).last = NULL;
    free(aux);
  }
}
int peek(T_queue Q) {
  if (Q.first != NULL)
    return Q.first->data.data;
  else
    return -1;
}
void printQueue(T_queue Q) {
  if (Q.first != NULL) {
    while (Q.first != NULL) {
      printf("%d ", Q.first->data.data);
      Q.first = Q.first->next;
    }
    printf("\n");
  }
}

void destroyQueue(T_queue *Q) {
  node *aux;
  while ((*Q).first != NULL) {
    aux = (*Q).first;
    (*Q).first = (*Q).first->next;
    free(aux);
  }
}

void addNode(Tree *root, int data) {
  *root = (Tree)malloc(sizeof(nodeT));
  (*root)->data = data;
  (*root)->left = NULL;
  (*root)->right = NULL;
}

int getHeight(Tree root) {
  int pi, pd;
  if (root == NULL) {
    return 0;
  } else {
    pd = getHeight(root->right);
    pi = 1 + getHeight(root->left);
    if (pd > pi)
      return pd;
    else
      return pi;
  }
}

void addNode_BST(Tree *root, int data) {
  Tree temp = *root;
  while (temp != NULL) {
    if (data < temp->data)
      temp = temp->left;
    else
      temp = temp->right;
  }
  if (temp == NULL) {
    temp = (Tree)malloc(sizeof(nodeT));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
  }
}

int getMaximumBST(Tree root) {
  if (root != NULL) {
    if (root->right == NULL)
      return root->data;
    else
      return getMaximumBST(root->right);
  } else {
    return -1;
  }
}

int getMinimumBST(Tree root) {
  if (root == NULL)
    if (root->left == NULL)
      return root->data;
    else
      return getMaximumBST(root->left);
  else
    return -1;
}

void printTree_PreOrder(Tree root) {
  if (root != NULL) {
    printf("%d ", root->data);
    printTree_PreOrder(root->left);
    printTree_PreOrder(root->right);
  }
}

void printTree_Inorder(Tree root) {
  if (root != NULL) {
    printTree_Inorder(root->left);
    printf("%d ", root->data);
    printTree_Inorder(root->right);
  }
}
void printTree_PostOrder(Tree root) {
  if (root != NULL) {
    printTree_PostOrder(root->left);
    printTree_PostOrder(root->right);
    printf("%d ", root->data);
  }
}

void printTree_BFS(Tree root) {
  if (root == NULL)
    return;

  T_queue Q = create_queue();
  insert(&Q, *root);

  while (!isEmpty(Q)) {
    nodeT data;
    remove_element(&Q, &data);
    printf("%d ", data.data);
    if (data.left != NULL)
      insert(&Q, *(data.left));
    if (data.right != NULL)
      insert(&Q, *(data.right));
  }
}
