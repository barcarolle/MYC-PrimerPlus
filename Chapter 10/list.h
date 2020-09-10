#ifndef LIST_H_
#define LIST_H_

struct mil {
  char * name_;
  mil * p;
}

typedef mil Item;

class list {
private:
  enum {MAX = 50};
  char * name_;
  
public:
  void add(const char * name, int a);
  bool is_empty(const Item & item);
  bool is_full(const Item & item);
  void visit(void (*pf)(Item &));
}
