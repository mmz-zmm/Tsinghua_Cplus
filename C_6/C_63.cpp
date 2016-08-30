//�����kС��

#include "stdafx.h"

#include<iostream>
using namespace std;

int Partition(int * arr, int left, int right)
{
	int pivot = arr[right];
	int i = left;
	for (int j= left; j< right; j++)
	{
		if (arr[j] < pivot) {
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i++;
		}
	}
	int temp = pivot;
	arr[right] = arr[i];
	arr[i] = pivot;
	return i;
}

int findKthMinimum(int * a, int k, int left, int right)
{
	if (left == right) 
		return a[left]; // ����ֻ��һ����
	int q = Partition(a, left, right);
	int numL = q - left + 1; //���Ԫ�ظ���
	if (numL == k)
		return a[q];
	else if (k < numL)
		return findKthMinimum(a, k, left, q - 1);// ����߲���
	else
		return findKthMinimum(a, k - numL, q + 1, right);//���ұ߲���
}

int C_63()
{
	int n,k;
	cin >> n >> k;
	int *a = new int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout<<findKthMinimum(a, k, 0, n - 1)<<endl;
	return 0;
}