#include "linkedlist.h"

int main() {

  T_list *list = createList();
  insert_beg(list, 1);
  insert_beg(list, 2);
  insert_beg(list, 3);
  insert_beg(list, 4);
  insert_beg(list, 5);
  insert_beg(list, 6);

  insert_end(list, 7);
  insert_end(list, 8);
  insert_end(list, 9);
  insert_end(list, 10);
  printList(list);
  return 0;
}
