// C_61.cpp : Given an integer List, find out the maximum sum among its sub-lists.
//

#include "stdafx.h"
#include <climits>
#include <iostream>

using namespace std;

int maxsubset(int *a, int n) {

	int temp = 0,
		summax = INT_MIN;
	for (int i = 0; i <= n; i++) {
		temp += a[i];
		if (temp > summax)
			summax = temp;
		else if (temp < 0)
			temp = 0;
	}
	return summax;
}


int C_61()
{
	int count;

	cin >> count;

	int *a = new int[count];

	for (int i = 0; i < count; i++)
		cin >> a[i];
	cout << maxsubset(a, count)<<endl;
	
	delete a;

    return 0;
}

