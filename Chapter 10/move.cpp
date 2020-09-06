Move(double a = 0, double b = 0)
{
  this->x = a;
  this->y = b;
}

showmove() const;
{
  using std::cout;
  
  cout << this->x;
  cout << this->y;
}

Move add(const Move & m) const;
{ 
  Move s;
  
  this->x += m.x;
  this->y += y.x;
  
  s.x = this->x;
  s.y = this->y;
  
  return s;
}

reset(double a = 0, b = 0)
{
  this->x = a;
  this->y = b;
}
