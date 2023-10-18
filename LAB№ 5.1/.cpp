// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double x); // прототип
int main()
{
	double x;
		cout << "a = "; cin >> x;
		double c = f(x) + f(1 + f(x)) / (1 + f(1 + f(x)) * f(1 + f(x)));
	cout << "c = " << c << endl;
	return 0;
}
double f(const double a) // визначення
{
	return pow(sin(a), 2) + pow(a, 2) + 1;
}