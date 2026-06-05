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
};

int main()
{
}