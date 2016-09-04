//C_83: �����λ��ǳ����Σ�
//      ����int getVertexCount(Shape * b)����b�Ķ�����Ŀ����bָ��Shape���ͣ�����ֵΪ0��
//      ��bָ��Triangle���ͣ�����ֵΪ3����bָ��Rectangle���ͣ�����ֵΪ4��

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

/*��dynamic_cast����ת����������ɸú���*/
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