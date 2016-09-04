//C_83: 三角形还是长方形？
//      函数int getVertexCount(Shape * b)计算b的顶点数目，若b指向Shape类型，返回值为0；
//      若b指向Triangle类型，返回值为3；若b指向Rectangle类型，返回值为4。

#include "stdafx.h"

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {}
	virtual ~Shape() {}
};

class Triangle : public Shape {
public:
	Triangle() {}
	~Triangle() {}
};

class Rectangle : public Shape {
public:
	Rectangle() {}
	~Rectangle() {}
};

/*用dynamic_cast类型转换操作符完成该函数*/
int getVertexCount(Shape * b) 
{
	Triangle* Tri = dynamic_cast<Triangle*>(b);
	Rectangle* Rec = dynamic_cast<Rectangle*>(b);
	if (Tri != nullptr)
		return 3;
	else if (Rec != nullptr)
		return 4;
	else
		return 0;
}

int C_83() {
	Shape s;
	cout << getVertexCount(&s) << endl;
	Triangle t;
	cout << getVertexCount(&t) << endl;
	Rectangle r;
	cout << getVertexCount(&r) << endl;
}