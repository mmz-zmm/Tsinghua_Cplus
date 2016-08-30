#include "stdafx.h"

#include <iostream>
using namespace std;

class Mouse {
	/* Your code here! */
public:
	static int num;

	// constructor function
	Mouse() {
		num++;
	}
	// copy constructor function
	Mouse(const Mouse &p) {
		num++;
	}
	// destroy
	~Mouse() { num--; }
};

void fn(Mouse m);

int Mouse::num = 0;

int C_52()
{
	Mouse::num = 0;
	Mouse a;
	cout << Mouse::num << endl;
	Mouse b(a);
	cout << Mouse::num << endl;
	for (int i = 0; i < 10; ++i)
	{
		Mouse x;
		cout << Mouse::num << endl;
	}
	fn(a);
	cout << Mouse::num << endl;
	return 0;
}

void fn(Mouse m)
{
	cout << Mouse::num << endl;
	Mouse n(m);
	cout << Mouse::num << endl;
}