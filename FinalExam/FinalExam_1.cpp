// FinalExam.cpp : ����һ���ַ��������ܰ�����Сд��ĸ�����֡������š��ո�ȣ���
//                 ��ֻ����������ĸ�����֣������Դ�Сд���ж����Ƿ�Ϊ���Ĵ�
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int Final_1()
{
	string str_old;
	string str_new;
	bool is_palindrome = true;
	// read a line of string
	getline(cin, str_old);
	for (auto c : str_old)
	{
		if (isalnum(c))
		{
			str_new += tolower(c);
		}
			
	}
	auto iter1 = str_new.begin(), iter2 = str_new.end();
	while (iter1 != iter2)
	{
		--iter2;  // decrease iter2 first, cause it binds to the element
		          // next to the last one;
		if (*iter1 != *iter2)
		{
			is_palindrome = false;
			break;
		}
		++iter1;
		

	}
	if (is_palindrome)
		cout << 1 << endl;
	else
		cout << 0 << endl;

    return 0;
}

