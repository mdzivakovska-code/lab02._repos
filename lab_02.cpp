#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double alpha = 0.0;
	double beta = 0.0;
	double Pi = 4 * atan(1.0);
	double a = alpha * Pi / 180;
	double b = beta * Pi / 180;
	cout << "enter a:";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	double z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
	double z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	return 0;
}