#include "binarytree.h"

void addNode(Tree *root, int data) {
  *root = (Tree)malloc(sizeof(node));
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
    temp = (Tree)malloc(sizeof(node));
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
