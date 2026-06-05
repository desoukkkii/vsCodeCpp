#include <iostream>
using namespace std;

class bankAccount
{
private:
  int accountNumber;
  double balance;
};

class savingAccount : public bankAccount
{
private:
  double interestRate;
};

int main()
{
}