#include <iostream>
using namespace std;

class Person
{
public:
  void display() { cout << "Base!"; }
};

class Student : public Person
{
public:
  void display() { cout << "Derived!"; }
};

int main()
{
  Person *ptr;
  Student s;
  ptr = &s;
  ptr->display();

  return 0;
}