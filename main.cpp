#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  Person() : name("Unknown"), age(0) {}
  Person(string n, int a) : name(n), age(a) {}
  string getName()
  {
    return name;
  }
  int getAge()
  {
    return age;
  }
};

class Employee : public Person
{
private:
  double salary;
  string jobTitle;

public:
  Employee() : Person()
  {
    salary = 0.0;
    jobTitle = "Unknown";
  }
  Employee(string n, int a, string jT, double s) : Person(n, a), salary(s), jobTitle(jT) {}
  void display()
  {
    cout << "Name: " << getName() << endl
         << "Age: " << getAge() << endl
         << "Salary: $" << salary << endl
         << "Job title: " << jobTitle << endl;
  }
};

int main()
{
  Employee emp("DESOUKI", 20, "AI Engineer", 12000);
  emp.display();
  return 0;
}