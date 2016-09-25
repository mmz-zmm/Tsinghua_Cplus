// FinalExam.cpp : 输入一行字符串（可能包含大小写字母、数字、标点符号、空格等），
//                 现只考虑其中字母和数字，并忽略大小写，判断其是否为回文串
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

