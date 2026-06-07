#include <iostream>
using namespace std;

class Test
{
public:
  Test() { cout << "Normal constructor."; }
  Test(const Test &t) { cout << "Copy constructor."; }
};

int main()
{
  Test t1, t2(t1);

  return 0;
}