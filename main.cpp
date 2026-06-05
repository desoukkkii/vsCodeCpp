#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  int age;

public:
  Person() : name("Unknown"), age(0) {}
  Person(string n, int a) : name(n), age(a) {}
};

class Employee : public Person
{
public:
  double salary;
  string jobTitle;
  Employee() : Person()
  {
    salary = 0.0;
    jobTitle = "Unknown";
  }
  Employee(double s, string jT, string n, int a) : Person(n, a)
  {
    salary = s;
    jobTitle = jT;
  }
};

int main()
{
}