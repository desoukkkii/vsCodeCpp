#include <iostream>
using namespace std;

class Person
{
protected:
  int id;
  string name;

public:
  Person(int i, string n) : id(i), name(n) {}
  ~Person() { cout << "Person Destructore Called."; }
};

class Student : public Person
{
private:
  double grade;
  string department;

public:
  Student(int i, string n, double g, string d) : Person(i, n), grade(g), department(d) {}

  void dis()
  {
    cout << "ID: " << id << endl
         << "Name: " << name << endl
         << "Grade: " << grade << endl
         << "Department: " << department << endl;
  }

  friend void grade(Student s);
};

void grade(Student s) { cout << "Grade: " << s.grade; }

int main()
{
  Student s1(1, "Student 1", 4.00, "CS"), s2(2, "Student 2", 3.00, "AI");
  s1.dis();
  grade(s1);
  cout << endl;
  s2.dis();
  grade(s2);
  return 0;
}