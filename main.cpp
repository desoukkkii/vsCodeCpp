#include <iostream>
using namespace std;

class Exam
{
protected:
  double midMark, finalMark;

public:
  Exam(double mK, double fK) : midMark(mK), finalMark(fK) {}
};

class Sports
{
protected:
  double sportsMark;

public:
  Sports(double sK) : sportsMark(sK) {}
};

class Result : public Exam, public Sports
{
private:
  double totalMark;

public:
  Result(double mK, double fK, double sK) : Exam(mK, fK), Sports(sK), totalMark(0) {}
  double calculateTotal() { return midMark + finalMark + sportsMark; }
  void dis() { cout << calculateTotal(); }
};

int main()
{
  Result r(1.00, 2.00, 3.00);
  r.calculateTotal();
  r.dis();
  return 0;
}