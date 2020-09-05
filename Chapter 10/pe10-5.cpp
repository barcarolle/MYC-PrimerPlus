#include <iostream>
#include "customerStack.h"

int main()
{
  using namespace std;
  
  int i, j;
  double total = 0;
  
  for(i = 0; i < MAX; i++)
  {
    cout << "Enter fullname: ";
    cin >> items[i].fullname;
    
    cout << "Enter payment: ";
    cin >> items[i].payment;
    
    total += items[i].payment;
  }
  
  cout << "Select customer to remove: ";
  cin >> j;
  remove(j);
  
  return 0;
 }
  
  
