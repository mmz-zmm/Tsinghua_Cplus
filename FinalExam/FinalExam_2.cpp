// FinalExam.cpp : 计算长方形、圆、三角形三种类型区域面积,指定不同的类型，输入参数也不同
//

#include "stdafx.h"
#define _USE_MATH_DEFINES  // to use C++ math constants
#include <cstdio>
#include <iostream>
#include <cmath>



using namespace std;

enum shape { CIRCLE, TRIANGLE, RECTANGLE };

class Shape
{
public:
	Shape() {};
	virtual void showArea() = 0;
};

class Circle :public Shape
{
public:
	Circle(double r)
	{
		radius = r;
	}
	//补充该函数
	void showArea()
	{
		cout << M_PI * radius * radius << endl;
	}
private:
	double radius;
};

class Triangle :public Shape
{
public:
	Triangle(double a1, double b1, double c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}
	//补充该函数
	void showArea()
	{
		double s    = (a + b + c) / 2.0;
		double area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << area << endl;
	}
private:
	double a, b, c;
};

class Rectangle :public Shape
{
public:
	Rectangle(double x, double y)
	{
		width = x;
		height = y;
	}
	//补充该函数
	void showArea()
	{
		cout << width * height << endl;
	}
private:
	double width, height;
};

//补充该函数
void calArea(Shape* ptr) {	
	cout.setf(ios_base::fixed);
	cout.precision(2);
	ptr->showArea();
}

int Final_2() {
	int type;
	cin >> type;
	if (type == CIRCLE) {
		double r;
		cin >> r;
		Circle circle(r);
		calArea(&circle);
	}
	else if (type == TRIANGLE) {
		double a, b, c;
		cin >> a >> b >> c;
		Triangle triangle(a, b, c);
		calArea(&triangle);
	}
	else {
		double x, y;
		cin >> x >> y;
		Rectangle rectangle(x, y);
		calArea(&rectangle);
	}
	return 0;
}