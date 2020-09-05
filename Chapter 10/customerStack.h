#ifndef STACK_H_
#define STACK_H_

struct customer {
  char fullname[35];
  double payment;
};

typedef customer Item;

class customerStack
{
private:
  enum {MAX = 10};
  Item items[MAX];
  double total;
  
public: 
  void remove(int n);
}
