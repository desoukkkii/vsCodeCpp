#include <iostream>
using namespace std;

class bankAccount
{
private:
  int accountNumber;
  double balance;

public:
  bankAccount(int aN, double bal) : accountNumber(aN), balance(bal) {}
  int getAccN()
  {
    return accountNumber;
  }
  double getBal()
  {
    return balance;
  }
};

class savingAccount : public bankAccount
{
private:
  double interestRate;

public:
  savingAccount(int aN, double bal, double intR) : bankAccount(aN, bal), interestRate(intR) {}
  double intRate()
  {
    return getBal() + (getBal() * interestRate);
  }
  void display()
  {
    cout << "Account number: " << getAccN() << endl
         << "Balance: " << getBal() << endl
         << intRate() << endl;
  }
};

int main()
{
  savingAccount sv(1, 1000, 1);
  sv.display();
}