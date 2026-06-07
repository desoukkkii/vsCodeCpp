#include <iostream>
using namespace std;

class Person
{
protected:
  int id;
  string name;

public:
  Person(int i, string n) : id(i), name(n) {}
  ~Person() { cout << "Done!"; }
};

class Student : public Person
{
private:
  double grade, gpa;

public:
  Student(int i, string n, double gr, double gp) : Person(i, n), grade(gr), gpa(gp) {}

  void dis() { cout << "Display function called!"; }

  friend void disInfo(Student s);
};

void disInfo(Student s) { cout << "ID: " << s.id << endl
                               << "Name: " << s.name << endl
                               << "Grade: " << s.grade << endl
                               << "GPA: " << s.gpa << endl; }

int main()
{
  Student s(1, "DESOUKI", 97.00, 4.00);
  Student *ptr = &s;
  ptr->dis();
  disInfo(s);
  return 0;
}