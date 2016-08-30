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
		Yuebao::setProfitRate(profitRate);//设定鱼额宝的利率
		Yuebao y(0); //新建鱼额宝账户，余额初始化为0
		int operation;//接受输入判断是存还是取
		double amount;//接受输入存取金额
		for (int i = 0; i < n; ++i)
		{
			y.addProfit();//加入前一天余额产生的利息
			cin >> operation >> amount;
			if (operation == 0)
				y.deposit(amount);//存入金额
			else
				y.withdraw(amount);//取出金额
		}
		cout << y.getBalance() << endl;//输出最终账户余额
	}
	return 0;
}


