// C_92.cpp : ��дһ���۰���ҵ�ģ�庯��binSearch()������һ�����飬���鳤�Ⱥ�Ҫ���ҵ�Ԫ��key,
//            ������˳��������ҹ����з��ʵ�����Ԫ���±ꡣ
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

/*��ʵ���۰���ң�����˳����������ʵ�Ԫ���±�*/

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