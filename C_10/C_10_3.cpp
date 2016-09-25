// C_10_3.cpp : 给定一个串a和串b，求b在a中出现次数
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