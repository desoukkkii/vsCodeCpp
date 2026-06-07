#include <iostream>
using namespace std;

class Student
{
protected:
  int id;
  string name;

public:
  Student(int i, string n) : id(i), name(n) {}

  void dis()
  {
    cout << "ID: " << id << endl
         << "Name: " << name << endl;
  }
};

int main()
{
  Student s(1, "DESOUKI");
  Student *ptr = &s;
  ptr->dis();
  return 0;
}