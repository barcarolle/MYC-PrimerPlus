#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
  using namespace std;
  using VECTOR::Vector;
  srand(time(0));
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;
  int NUM, i;
  
  cout << "Enter an integer you want: ";
  cin >> NUM;
  
  int combination[NUM];
  int * highest, * lowest, average, sum = 0;
  
  cout << "Enter target distance (q to quit): ";
  cin >> target;
  
  cout << "Enter step length: ";
  if (!(cin >> dstep))
    break;
    
  for (i = 0; i < NUM; i++)
  {
    while (result.magval() < target)
    {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }
    
    combination[i] = steps;
    steps = 0;
  }
  
  highest = combination[0];
  for(i = 1; i < NUM; i++)
  {
    if (combination[i] > highest)
      highest = combination[i];
  }
  cout << "Highest number of steps is: " << highest;
  
  lowest = combination[0];
  for(i = 1; i < NUM; i++)
  { 
    if (combination[i] < lowest)
      lowest = combination[i];
  }
  cout << "Lowest number of stesps is: " << lowest;
  
  for(i = 0; i < NUM; i++)
    sum += combination[i];
  
  average = sum / NUM;
  
  cout << "Average steps are: " << average;
  
  return 0;
}
  
  
  
  
  

  
  
  
  
  
