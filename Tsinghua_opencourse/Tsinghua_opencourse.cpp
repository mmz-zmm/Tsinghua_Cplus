// Tsinghua_opencourse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
// power function, return a^b
int pow(int a, int b)
{
	int c = 1;
	for (int i = 1; i <= b; i++)
	{   
		c = c * a;
	}
	return c;
}
// input : a binary integer n with length less than 10
// output: the corresponding decimal number
int binary2decimal()
{
	int a, b, c, aa = 0, i = 0;
	cin >> a;
	if (a / 1e9 > 10)
		cout << "The number is too long, please shorter than 10.\n";
	else
	{
		do
		{
			b = a / 10;
			c = a % 10;
			aa += c * pow(2,i);
			i++;
			a = b;
		} while (a != 0);
		cout << aa << endl;
	}
	return 0;
}
// input : n integers where n <=1000;
// output: the sum, min and max value of the integer list
int sum_min_max()
{
	int sum = 0, min = 0, max = 0;
	int n, a, i = 0;
	cout << "Please enter the number of integer as input:\n";
	cin >> n;
	if (n > 100)
		cout << "Error, the number you offer is too big, please less than 100.\n";
	else {
		for (i = 1; i <= n; i++) {
			cin >> a;
			sum += a;
			if (i == 1) {
				min = a;
				max = a;
			}
			else {
				if (a < min) min = a;
				if (a > max) max = a;
			}
		}
		cout << "sum = " << sum << "  min = " << min << "  max = " << max << "\n";
	}

	return 0;
}

int main()
{	
	int i = binary2decimal();

    return 0;
}

