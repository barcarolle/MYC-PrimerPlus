#include <iostream>
#include "list.h"

int main(void)
{
  Item list[MAX];
  int i;
  
  list[0].p = list[1];
  
  for(i = 1, i < (MAX - 1); i++)
    list[i].p = list[i + 1];
  
  add(Daniel, 8);
  is_empty(list[15]);
  
  return 0;
  
}
