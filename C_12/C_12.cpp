// C_12.cpp : 输入一个三角形三条边长，判断是否是等腰三角形并计算其面积。
//  注意若输入数据非等腰三角形数据，要求使用exception处理
//

#include "stdafx.h"


#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

/*完善此函数*/
double calArea(double a, double b, double c) {
	// if the side length is positive
	if (a <= 0 || b <= 0 || c <= 0 ||
		a + b <= c || b + c <= a || c + a <= b ||
		( a != b && b != c && a != c))
		throw invalid_argument("The input is illegal");

	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));


}

int C_12() {
	double a, b, c;
	cin >> a >> b >> c;
	try {
		double area = calArea(a, b, c);
		cout.setf(ios_base::fixed);
		cout.precision(2);
		cout << area << endl;
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
}

