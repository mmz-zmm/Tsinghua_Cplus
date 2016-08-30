#include "stdafx.h"

#include <iostream>
#include <cmath>
using namespace std;

class Integer {
private:
	int _num;
	//getLength()������ȡ_num����
	int getLength() {
		int r, i;
		r = _num;
		i = 0;
		while (r != 0) {
			r = r / 10;
			i += 1;
		}
		return i;
	}
public:
	//Integer�๹�캯��
	Integer(int num): _num(num){
	}
	//��ת_num
	int inversed() {
		int a, r, b, i;
		a = _num;
		r = 0;
		b = 0;
		i = 0;
		int n = getLength();
		while (a != 0) {
			r = a % 10;
			a = a / 10;
			i += 1;
			b += pow(10, (n  - i)) * r;
		}
		return b;
	}
};

int C_42() {
	int n;
	cin >> n;
	Integer integer(n);
	cout << integer.inversed() << endl;
	return 0;
}