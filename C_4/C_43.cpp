#include "stdafx.h"

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Equation {
private:
	int _a, _b, _c;
public:
	Equation(int a, int b, int c): _a(a),_b(b),_c(c) {
	}
	void solve() {
		double x1, x2, delta;
		x1 = 0.00;
		x2 = 0.00;
		delta = 0.00;
		if (_a != 0)
		{
			delta = pow(_b, 2) - 4.0 * _a * _c;
			if (delta > 1e-9)
			{
				x1 = (-_b - sqrt(delta)) / (2.0 * _a);
				x2 = (-_b + sqrt(delta)) / (2.0 * _a);
				cout << "1\n";
				cout <<fixed<<setprecision(2)<< x1 <<"  "<< x2 << endl;
			}
			else if (abs(delta) <= 1e-9)
			{
				x1 = (-_b ) / (2.0 * _a);
				x2 = x1;
				cout << "2\n";
				cout <<fixed<< setprecision(2) << x1 << endl;
			}
			else
			{
				cout << "3\n";
			}
		}
		else
		{
			if (_b == 0)
			{
				if (_c != 0)
				{
					cout << "4\n";
				}
				else
				{
					cout << "5\n";
				}
			}
			else 
			{
				x1 = -_c / _b;
				cout << "6\n";
				cout << fixed << setprecision(2) << x1 << endl;
			}
		}
	}
};
int C_43() {
	int a, b, c;
	cin >> a >> b >> c;
	Equation tmp(a, b, c);
	tmp.solve();
	return 0;
}