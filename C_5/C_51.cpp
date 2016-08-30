// C_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class Yuebao
{
	static double profitRate;
	double remain_money;
public:
	static void setProfitRate(double rate)
		/* Your code here! */
	{
		profitRate = rate;
	}

	Yuebao(double x = 0.0) :remain_money(x) {
	}

	void addProfit()
	{
		double rate = 0.0;
		rate = remain_money * profitRate;
		remain_money += rate;
	}

	void deposit(double amount)
	{
		remain_money += amount;
	}

	void withdraw(double amount)
	{
		remain_money -= amount;
	}
	double getBalance()
	{
		return remain_money;
	}

};

double Yuebao::profitRate    = 0.0;

int C_51()
{
	int n;
	while (cin >> n)
	{
		double profitRate;
		cin >> profitRate;
		Yuebao::setProfitRate(profitRate);//�趨��������
		Yuebao y(0); //�½����˻�������ʼ��Ϊ0
		int operation;//���������ж��Ǵ滹��ȡ
		double amount;//���������ȡ���
		for (int i = 0; i < n; ++i)
		{
			y.addProfit();//����ǰһ������������Ϣ
			cin >> operation >> amount;
			if (operation == 0)
				y.deposit(amount);//������
			else
				y.withdraw(amount);//ȡ�����
		}
		cout << y.getBalance() << endl;//��������˻����
	}
	return 0;
}


