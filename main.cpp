#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  int age;

public:
  Person(string n, int a) : name(n), age(a) {}
  ~Person() { cout << "Person ends!"; }
};

class Student : public Person
{
protected:
  int studentID;

public:
  Student(string n, int a, int sid) : Person(n, a), studentID(sid) {}
  ~Student() { cout << "Student ends!"; }
};

class GraduateStudent : public Student
{
private:
  string thesisTitle;

public:
  GraduateStudent(string n, int a, int sid, string tT) : Student(n, a, sid), thesisTitle(tT) {}
  ~GraduateStudent() { cout << "GraduateStudent ends!"; }

  void dis() { cout << "Name: " << name << endl
                    << "Age: " << age << endl
                    << "ID: " << studentID << endl
                    << "Thesis title: " << thesisTitle << endl; }
};

int main()
{
  GraduateStudent g("DESOUKI", 20, 101, "CS");
  g.dis();
  return 0;
}