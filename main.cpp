#include <iostream>
using namespace std;

class Person
{
private:
  string name;
  int age;
};

class Employee : public Person
{
public:
  double salary;
  string jobTitle;
};

int main()
{
}