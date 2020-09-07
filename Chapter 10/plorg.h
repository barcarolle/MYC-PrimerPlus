#include <iostream>

const int MAX = 19;

class Plorg {
private:
  int CI;
  char name[MAX];
  
public: 
  Plorg();
  void change(Plorg & m, int n);
  void report();
}
