// C_81.cpp : Defines the entry point for the console application.
// 求两个复数的加减乘除。

#include "stdafx.h"


#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Complex {
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {};
	Complex operator+ (const Complex &c2) const;
	Complex operator- (const Complex &c2) const;

	/*实现下面三个函数*/
	Complex operator* (const Complex &c2) const;
	Complex operator/ (const Complex &c2) const;
	friend ostream & operator<< (ostream &out, const Complex &c);

private:
	double real;
	double imag;
};

Complex Complex::operator+ (const Complex &c2) const {
	return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator- (const Complex &c2) const {
	return Complex(real - c2.real, imag - c2.imag);
}

Complex Complex::operator*(const Complex &c2) const {
	double r1 = real * c2.real - imag * c2.imag;
	double i1 = imag * c2.real + real * c2.imag;
	return Complex(r1, i1);
}

Complex Complex::operator/(const Complex &c2) const {
	double temp = c2.real * c2.real + c2.imag * c2.imag;
	double r1 = (real * c2.real + imag * c2.imag)/temp ;
	double i1 = (imag * c2.real - real * c2.imag)/temp ;
	return Complex(r1, i1);
}

ostream & operator<< (ostream &out, const Complex &c) {
	out << c.real << " " << c.imag << endl;
	return out;
}
int C_81() {
	double real, imag;
	cin >> real >> imag;
	Complex c1(real, imag);
	cin >> real >> imag;
	Complex c2(real, imag);
	cout << c1 + c2;
	cout << c1 - c2;
	cout << c1 * c2;
	cout << c1 / c2;

	return 0;
}

