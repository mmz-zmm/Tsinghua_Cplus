// C_10_1.cpp : ��дһ�����򣬴Ӽ�������һ�������ʣ�ÿ���յ�һ�����ʺ�
//              ����õ����������ֹ��Ĵ��������յ���QUIT�����ʺ����ֱ���˳���
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;


int C_10_1()
{
	map<string, size_t> word_count;
	string word;

	while(cin >> word && word != "QUIT")
	{
		cout << word_count[word]++<<endl;		
	} 
    return 0;
}

