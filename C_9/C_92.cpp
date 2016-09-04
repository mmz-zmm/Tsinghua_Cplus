// C_92.cpp : 编写一个折半查找的模板函数binSearch()，接收一个数组，数组长度和要查找的元素key,
//            按查找顺序输出查找过程中访问的所有元素下标。
//

#include "stdafx.h"

#include <iostream>
using namespace std;

template <class T>
int binSearch(T arr[], int l, int r, T key)
{
	int index_L = l;
	int index_R = r;
	int index = (index_L + index_R) / 2;
	do
	{
		cout << index << endl;
		if (arr[index] == key)
			return 0;
		else if (arr[index] < key)
		{
			binSearch(arr, index + 1, index_R, key);
			return 0;  // attention: need "return 0;" to end the program, or it won't stop;
		}    
		else
		{
			binSearch(arr, index_L, index - 1, key);
			return 0;
		}
				
	} while (index_L <= index_R);
}

/*请实现折半查找，并按顺序输出被访问的元素下标*/

int C_92()
{
	int n, m;
	int key1;
	double key2;
	cin >> n >> m >> key1 >> key2;
	int* arr_int = new int[n];
	double* arr_double = new double[m];
	for (int i = 0; i < n; ++i)
		cin >> arr_int[i];
	for (int i = 0; i < m; ++i)
		cin >> arr_double[i];
	binSearch(arr_int, 0, n-1, key1);
	binSearch(arr_double, 0, m-1, key2);
	delete[] arr_int;
	delete[] arr_double;
	return 0;
}