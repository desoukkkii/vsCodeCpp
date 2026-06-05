#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  int id;

public:
  Person(string n, int i) : name(n), id(i) {}
};

class Doctor : public Person
{
private:
  string specialization;
  double salary;

public:
  Doctor(string n, int i, string spec, double sal) : Person(n, i), specialization(spec), salary(sal) {}
  void dis()
  {
    cout << "Name: " << name << endl
         << "ID: " << id << endl
         << "Specialization: " << specialization << endl
         << "Salary: " << salary << endl;
  }
};

int main()
{
  Doctor doc("MOHAMMED", 202, "CS", 22000);
  doc.dis();
  return 0;
}