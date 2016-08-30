// 求一个长度不超过15的字符串的回文子序列个数（子序列长度>=1）
// 一个字符串的子序列是指在原字符串上去除某些字符但不破坏余下元素的相对位置（在前或在后）而形成的新字符串,
// 对于“abaa”来说，其所有回文子序列为a,b,a,a,aba,aba,aa,aa,aa,aaa 

#include "stdafx.h"

#include<string>
#include<iostream>

using namespace std;

void PalindromeSubset(const int n, const string s)
{
	int **dp = new int*[n];
	for (int i = 0; i < n; i++)
	{
		dp[i] = new int[n](); // 加上()表示对动态数组进行初始化
		dp[i][i] = 1;
	}
	for (int i = 1; i < n; i++)
	{		
		for (int j = 0; j < n - i; j++)
		{
			if (s[j] == s[j + i])
				dp[j][i + j] = dp[j][i + j - 1] + dp[j + 1][i + j] + 1;
			else
				dp[j][i + j] = dp[j][i + j - 1] + dp[j + 1][i + j] - dp[j + 1][i + j - 1];
		}

	}
	cout << dp[0][n - 1] << endl;
	for (int i = 0; i < n; i++)
		delete[] dp[i];
	delete[] dp;
}

int C_62()
{
	string s1;
	cin >> s1; // read the string

	int n = s1.length();

	PalindromeSubset(n, s1);

	return 0;
}