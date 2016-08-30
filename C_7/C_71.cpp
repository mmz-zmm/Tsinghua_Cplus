// C_7.cpp : ����һ������Account�����ݳ�Ա����string�����userName���ڱ����˻�����������
//           ������Ա����Ĭ�Ϲ��캯�������ι��캯�����ڳ�ʼ�����ݳ�Ա����������ĳ�Ա��PrintName()��
//           ��Account��������CreditAccount�࣬�����������ݳ�Աcredit���ڼ�¼���û����ö�ȣ�
//           ������Ա�������ι��캯�����ڳ�ʼ�����ݳ�Ա������˻���Ϣ�ĳ�Ա����PrintInfo()��
//           Ҫ���ں���PrintInfo()����Ҫ���û���ĳ�Ա����PrintName()
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

//��ʵ��Account���캯��Account(char *name)
Account::Account(const string name)
{
	userName = name;
}
//��ʵ��Account��PrintUserName()����
void Account::PrintUserName()
{
	cout << userName << endl;
}
//��ʵ��CreditAccount��Ĺ��캯��CreditAccount(char* name, long number)
CreditAccount::CreditAccount(const string name, const int number):Account(name),credit(number){}
//��ʵ��CreditAccount���PrintInfo()����
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

