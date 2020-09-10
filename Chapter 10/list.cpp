void add(const char * name, int a)
{
  using std::strcpy;
  
  strcpy(Item[a].name_, name);
  
}

bool is_empty(Item & item)
{
  if (list[0].name = '\0')
    return true;
  else
    return false;
}
