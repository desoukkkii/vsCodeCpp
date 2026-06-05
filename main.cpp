#include <iostream>
using namespace std;

class Student
{
protected:
  string name;
  int id;

public:
  Student(string n, int i) : name(n), id(i) {}
};

class graduateStudent : public Student
{
private:
  string thesisTitle;
  double gpa;

public:
  graduateStudent(string n, int i, string tT, double g) : Student(n, i), thesisTitle(tT), gpa(g) {}
};

int main()
{
}