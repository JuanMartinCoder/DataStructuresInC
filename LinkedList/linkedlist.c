#include "linkedlist.h"

T_list *createList() {
  T_list *List = (T_list *)malloc(sizeof(T_list));
  List->size = 0;
  List->List = NULL;
  return List;
}
void insert_end(T_list *List, int data) {}
void insert_beg(T_list *List, int data) {}
void insert_pos(T_list *List, int data, int pos) {}
void delete_beg(T_list *List) {}
void delete_end(T_list *List) {}
void delete_pos(T_list *List, int pos) {}
int search(T_list *List, int data) {}
int size(T_list *List) {}
void printList(T_list *List) {}
