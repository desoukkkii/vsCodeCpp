#include <iostream>
using namespace std;

class Rectangle
{
private:
  double height, width;

public:
  Rectangle(double h, double w) : height(h), width(w) {}
  double getArea() { return height * width; }
};

int main()
{
  Rectangle r(5, 5);
  cout << "Area: " << r.getArea() << endl;
  return 0;
}