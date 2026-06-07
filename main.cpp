#include <iostream>
using namespace std;

class Employee
{
private:
  int empID;
  double salary, bonus;

public:
  Employee(int ei, double s, double b) : empID(ei), salary(s), bonus(b) {}
  ~Employee() { cout << "Employee Object Destroyed!" << endl; }

  friend void income(Employee e);
};

void income(Employee e)
{
  double income = e.salary + e.bonus;
  cout << "ID: " << e.empID << endl
       << "Salary: $" << e.salary << endl;
}

int main()
{
  Employee e1(1, 12000, 2000), e2(2, 14000, 2000);
  income(e1);
  income(e2);
  return 0;
}