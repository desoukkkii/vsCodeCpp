#include <iostream>
using namespace std;

double addition(double x, double y)
{
	return x + y;
}

int main()
{
	cout << "===== Adition =====" << endl;
	cout << "Enter first number: " << endl;
	int a, b;
	cin >> a;
	cout << "Enter the second number: " << endl;
	cin >> b;
	cout << addition(a, b);
	return 0;
}