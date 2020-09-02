#include <iostream>
#define LEN 50

class Bankaccount
{
  private:
    char name[LEN];
    std::string number_;
    double balance_;
    
  public: 
    BankAccount();
    BankAccount(const char * nm, std::string num, double bal);
    ~BankAccount();
    void display();
    void deposit(double a);
    void withdraw(double b)
}
