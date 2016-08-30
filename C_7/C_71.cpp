// C_7.cpp : 定义一个基类Account，数据成员包含string类变量userName用于保存账户主人姓名，
//           函数成员包括默认构造函数、带参构造函数用于初始化数据成员和输出姓名的成员函PrintName()。
//           从Account类派生出CreditAccount类，增加整型数据成员credit用于记录该用户信用额度，
//           函数成员包括带参构造函数用于初始化数据成员和输出账户信息的成员函数PrintInfo()。
//           要求：在函数PrintInfo()中需要调用基类的成员函数PrintName()
//

#include "stdafx.h"


#include <iostream>
#include <string>
using namespace std;

class Account
{
	string userName;
public:
	Account() {};
	Account(string name);
	void  PrintUserName();
};

class CreditAccount : public Account
{
public:
	CreditAccount(string name, int credit);
	void PrintInfo();
private:
	int credit;
};

//请实现Account构造函数Account(char *name)
Account::Account(const string name)
{
	userName = name;
}
//请实现Account的PrintUserName()函数
void Account::PrintUserName()
{
	cout << userName << endl;
}
//请实现CreditAccount类的构造函数CreditAccount(char* name, long number)
CreditAccount::CreditAccount(const string name, const int number):Account(name),credit(number){}
//请实现CreditAccount类的PrintInfo()函数
void CreditAccount::PrintInfo()
{
	PrintUserName();
	cout << credit << endl;
}
int C_71()
{
	CreditAccount a("I Love CPP", 10000);
	a.PrintInfo();
	return 0;
}

