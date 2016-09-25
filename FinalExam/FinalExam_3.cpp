// FinalExam.cpp : 请实现一个模板函数，求出数组中的中位数。
//                 数组可能为整数数组，也可能为浮点数数组
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
template<typename T>
T findMedian( vector<T> &v1)
{
	// sort the vector
	sort(v1.begin(), v1.end());
	return v1[v1.size() / 2 ];
}

int main()
{
	int m, n;
	// read in m integer and n float
	cin >> m >> n;
	vector<int>     vint(m);
	vector<float>   vfloat(n);
	for (int i = 0; i < m; i++)
		cin >> vint[i];
	for (int j = 0; j < n; j++)
		cin >> vfloat[j];

	cout << findMedian(vint) << endl;
	cout << findMedian(vfloat) << endl;

	return 0;
}