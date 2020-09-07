#include <iostream>
#include "plorg.h"

Plorg::Plorg()
{
  name = "Plorga";
  CI = 50;
}

void Plorg::change(Plorg & m, int n)
{
  this->CI = m.n;
}

void Plorg::report(Plorg & m)
{
  using std::cout;
  
  cout << "Name: " << m.name;
  cout << "CI: "" << m.CI;
}
