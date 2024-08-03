#include <stdio.h>
#include <stdlib.h>

typedef struct node_L {
  int data;
  struct node_L *next;
} node_L;

typedef struct {
  int size;
  node_L *List;
} T_list;

T_list *createList();
void insert_end(T_list *List, int data);
void insert_beg(T_list *List, int data);
void insert_pos(T_list *List, int data, int pos);
void delete_beg(T_list *List);
void delete_end(T_list *List);
void delete_pos(T_list *List, int pos);
int search(T_list *List, int data);
int size(T_list *List);
void printList(T_list *List);
