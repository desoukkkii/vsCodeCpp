#include <iostream>
using namespace std;

class Student
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
  Student s1(101), s2(s1);
  s1.display();
  s2.display();

  return 0;
}