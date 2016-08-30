// ��һ�����Ȳ�����15���ַ����Ļ��������и����������г���>=1��
// һ���ַ�������������ָ��ԭ�ַ�����ȥ��ĳЩ�ַ������ƻ�����Ԫ�ص����λ�ã���ǰ���ں󣩶��γɵ����ַ���,
// ���ڡ�abaa����˵�������л���������Ϊa,b,a,a,aba,aba,aa,aa,aa,aaa 

#include "stdafx.h"

#include<string>
#include<iostream>

using namespace std;

void PalindromeSubset(const int n, const string s)
{
	int **dp = new int*[n];
	for (int i = 0; i < n; i++)
	{
		dp[i] = new int[n](); // ����()��ʾ�Զ�̬������г�ʼ��
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