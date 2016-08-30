// C_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class Integer {
private:
	int _num;
public:
	//���캯��
	Integer(int num) : _num(num) {
	}
	//���㵱ǰInteger �� b֮������Լ��
	int gcd(Integer b) {
		int x, y;
		x = _num;
		y = b._num;
		while (y != 0)
		{
			int r = y;
			y = x % y;
			x = r;
		}
		return x;
	}
};

int C_41() {
	int a, b;
	cin >> a >> b;
	Integer A(a);
	Integer B(b);
	cout << A.gcd(B) << endl;
	return 0;
}

