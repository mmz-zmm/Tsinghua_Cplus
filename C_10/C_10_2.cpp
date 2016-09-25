// C_10_2.cpp : ����n����������n����ȥ��֮�����򣬲������С����������
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int C_10_2()
{
	vector<int> vec;
	int n;
	// read data
	cin >> n; 
	for (int i = 0; i < n; i++)
	{   
		int val;
		cin >> val;
		vec.push_back(val);
	}
	// sort data
	sort(vec.begin(), vec.end());

	// remove duplicate element
	auto last = unique(vec.begin(), vec.end());
	for (auto beg = vec.begin(), end = last; beg != end; ++beg)
		cout << *beg << endl;

	return 0;
}