BankAccount::BankAccount()
{
  name = "Nobody";
  number = "1";
  balance = 0.0;
}
 
 BankAccount::BankAccount(const char * nm, std::string num, double bal)
 {
  using std::strncpy
  
  strncpy(name, nm, LEN);
  name[LEN-1] = '\0'
  balance = bal;
 }
 
 void display()
 {
  using std::scout;
  using std::endl;
  
  cout << "Name: " << name;
  cout << "\nAccount Number: " << number;
  cout << "\nBalance: " << balance;
 }
 
 void deposit(double a)
 {
  *this.balance += a;
 }
 
 void withdraw(double b)
 {
  *this.balance -= b;
 }
