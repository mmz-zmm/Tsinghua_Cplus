// C_10_1.cpp : 编写一个程序，从键盘输入一个个单词，每接收到一个单词后，
//              输出该单词曾经出现过的次数，接收到“QUIT”单词后程序直接退出。
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

