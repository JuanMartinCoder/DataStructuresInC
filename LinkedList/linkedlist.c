#include "linkedlist.h"

T_list *createList() {
  T_list *List = (T_list *)malloc(sizeof(T_list));
  List->size = 0;
  List->List = NULL;
  return List;
}
void insert_end(T_list *List, int data) {
  node_L *new_node = (node_L *)malloc(sizeof(node_L));
  node_L *temp = List->List;
  new_node->data = data;
  new_node->next = NULL;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
  List->size++;
}
void insert_beg(T_list *List, int data) {
  node_L *new_node = (node_L *)malloc(sizeof(node_L));
  new_node->data = data;
  new_node->next = List->List;
  List->List = new_node;
  List->size++;
}

void insert_pos(T_list *List, int data, int pos) {
  node_L *new_node = (node_L *)malloc(sizeof(node_L));
  node_L *temp = List->List;
  new_node->data = data;
  if (pos == 0 || List->List == NULL) {
    new_node->next = List->List;
    List->List = new_node;
    List->size++;
  } else {
    if (pos > List->size)
      printf("Position out of range\n");
    else {
      int i = 0;
      while (i < pos - 1) {
        temp = temp->next;
        i++;
      }
      new_node->next = temp->next;
      temp->next = new_node;
      List->size++;
    }
  }
  free(temp);
}
void delete_beg(T_list *List) {}
void delete_end(T_list *List) {}
void delete_pos(T_list *List, int pos) {}
int search(T_list *List, int data) {}
int size(T_list *List) {}
void printList(T_list *List) {}
