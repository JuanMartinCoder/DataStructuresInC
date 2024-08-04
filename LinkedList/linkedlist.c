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

void delete_beg(T_list *List) {
  node_L *temp = List->List;
  List->List = List->List->next;
  free(temp);
  List->size--;
}

void delete_end(T_list *List) {
  node_L *temp = List->List;
  node_L *prev = NULL;
  while (temp->next != NULL) {
    prev = temp;
    temp = temp->next;
  }
  prev->next = NULL;
  free(temp);
  List->size--;
}

void delete_pos(T_list *List, int pos) {
  node_L *temp, *prev;
  int i = 0;
  if (List->List != NULL) {
    if (pos == 0) {
      temp = List->List;
      List->List = List->List->next;
      free(temp);
      List->size--;
    } else {
      temp = List->List;
      while (temp != NULL && i < pos - 1) {
        prev = temp;
        temp = temp->next;
        i++;
      }
      if (temp != NULL && i == pos - 1) {
        prev->next = temp->next;
        free(temp);
        List->size--;
      }
    }
  }
}

int search(T_list *List, int data) {
  int i = 0;
  node_L *temp = List->List;
  while (i < List->size && data != temp->data) {
    temp = temp->next;
    i++;
  }
  if (temp->data == data) {
    return i;
  } else {
    return -1;
  }
}

int size(T_list *List) { return List->size; }

void printList(T_list *List) {
  printf("List size: %d\n", List->size);
  node_L *temp = List->List;
  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
    if (temp == NULL) {
      printf("NULL\n");
    }
  }
}
