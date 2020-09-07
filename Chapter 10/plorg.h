#include <iostream>

const int MAX = 19;

class Plorg {
private:
  int CI;
  char name[MAX];
  
public: 
  Plorg(const char * name = "Plorga");
	void changeCI(int CI);
	void show(void) const; // prints name and CI to standard output
};
