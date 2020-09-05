void remove(int n)
{
  items[n].fullname = '\0';
  items[n].payment = 0;
  
  total -= items[n].payment;
}
