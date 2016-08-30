// Tsinghua_opencourse.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cmath>
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

// get an input integer, output a corresponding rhombus(����) pattern
int pattern()
{
	int m, n, a;
	int i, j, k;
	cout << "Please enter the number of integer as input:\n";
	cin >> n;
	
	if (n > 10) {
		cout << "Number too big, please less than or equal to 10.\n";
		return 1;
	}
	for (i = 1; i <= 2 * n - 1; i++) {
		if (i > n) {
			m = 2* n - 1 - 2 * (i - n);
			a = (2 * n - 1 - m) / 2;
		}
		else {
			m = 2 * i - 1;
			a = (2 * n - 1 - m) / 2;
		}

		
		for (j = 1; j <= a; j++) {
			cout << " ";
		}
		for (k = 1; k <= m; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

// arctan function: calculate arctan(x)
double arctan(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1e-15) {
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e = e * sqr;
		i += 2;
	}
	return r;
}
//�ж� n �Ƿ�Ϊ������
bool symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}
//��n������ѡk�������C��n,k�������
int comm(int n, int k) {
	if (k > n)
		return 0;
	else if (n == k || k == 0)
		return 1;
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}
// ��ŵ���������
//�� src ���������һ�������ƶ��� dest ����
void move(char src, char dest) {
	cout << src << " --> " << dest << endl;
}
//�� n �����Ӵ� src ���ƶ��� dest �룬�� medium ����Ϊ��ת
void hanoi(int n, char src, char medium, char dest, int &i)
{
	i += 1;     // ��¼����hanoi�Ĵ���
	if (n == 1)
		move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium, i);
		move(src, dest);
		hanoi(n - 1, medium, src, dest, i);
	}
}
// C3-1 : Right triangle problem
// input : 3 edge length of a triangle
// output: if this triangle is a right triangle, true for yes
bool IsTriangle(double a, double b, double c)
{

	if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
		return 1;
	else
		return 0;


}
//C3-2 : Fibonacci
// input: an integer n
// output: the n-th number of Fibonacci
long Fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);

}
//C3-2 : Fibonacci
// input: an integer n
// output: the n-th number of Fibonacci
long long Fibonacci2(int n)   // ע���������͵Ĳ�ͬ����n�ܴ�ʱ��int�ľ����Ѿ��޷�����Ҫ��
{
	long long Sn0, Sn1, Sn2;
	int i;

	if (n == 0 || n == 1)
		return 1;
	else {
		Sn0 = 1;
		Sn1 = 1;
		for (i = 2; i <= n; i++){
			Sn2 = Sn0 + Sn1;
			Sn0 = Sn1;
			Sn1 = Sn2;
		}
		return Sn2;
	
	}

}
//C3-3 : Ugly number problem
//input: a positive integer
//output: boolean value to indicate if it is an ugly numner
bool IsUgly(int n)
{
	if (n == 2 || n == 3 || n == 5)
		return 1;
	else {
		if (n % 2 == 0) {
			n = n / 2;
			return IsUgly(n);
		}
		if (n % 3 == 0) {
			n = n / 3;
			return IsUgly(n);
		}
		if (n % 5 == 0) {
			n = n / 5;
			return IsUgly(n);
		}
		return 0;
	}
}

int main()
{
	int  n;
	cin >> n;
	cout << Fibonacci2(n) << endl;

	return 0;
}