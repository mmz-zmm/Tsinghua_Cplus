// C_10_3.cpp : ����һ����a�ʹ�b����b��a�г��ִ���
//

#include "stdafx.h"
#include <string>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int main()
{
	string a, b;
	// read string a and b
	cin >> a;
	cin >> b;
	//count
	int occurrence = 0;
	string::size_type start = 0;
	while ((start = a.find(b, start)) != string::npos)
	{
		++occurrence;
		start += 1;
	}
	cout << occurrence << endl;
	return 0;
}