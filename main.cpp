#include <iostream>
using namespace std;

class Person
{
public:
  virtual void display() { cout << "Person."; }
};

class Student : public Person
{
private:
  int id;

public:
  Student(int i) : id(i) {}
  Student(const Student &s) : id(s.id) {}

  void display() { cout << "ID: " << id << endl; }
};

int main()
{
  Student s1(1001), s2(s1);
  Student *ptr1 = &s2;
  Person *ptr2 = &s1;
  ptr1->display();
  ptr2->display();

  return 0;
}