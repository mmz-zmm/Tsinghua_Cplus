// C_11_1.cpp : ����һ���������������ʽҪ�󣬰��ո�ʽҪ�󽫸ø����������
//

#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;

int C_11_1()
{
	int m, n;
	double a;
	cin >> m >> n;
	cin >> a;
	if (n == 0)
	{
		if (m == 0)
			cout << 0 << endl;
		else
		{
			cout << setw(m);
			cout << setfill('0') << static_cast<int>(a) << endl;
		}
	}
	else 
	{
		cout << setw(m + n + 1);
		cout << fixed;
		cout << setprecision(n);
		cout << setfill('0')<< a << setfill('0')<< endl;
	}
    return 0;
}

