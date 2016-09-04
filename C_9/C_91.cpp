// C_91.cpp : 编写一个模板函数getSum，接收一个数组，返回该数组所有元素的和。
//

#include "stdafx.h"

#include <iostream>
using namespace std;

/*请在这里填充代码*/
template <typename T>
T getSum(const T *array, const int n)
{
	T sum = static_cast<T>(0.0);
	for (int i = 0; i < n; i++)
		sum = sum + array[i];

	return sum;
}

int C_91()
{
	int n, m;
	cin >> n >> m;
	int* arr_int = new int[n];
	double* arr_double = new double[m];
	for (int i = 0; i < n; ++i)
		cin >> arr_int[i];
	for (int i = 0; i < m; ++i)
		cin >> arr_double[i];
	cout << getSum(arr_int, n) << endl;
	cout << getSum(arr_double, m) << endl;
	delete[] arr_int;
	delete[] arr_double;
	return 0;
}

