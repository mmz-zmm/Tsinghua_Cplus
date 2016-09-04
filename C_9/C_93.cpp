// C_93.cpp : ����ʵ��һ��ջģ���ࣨ�������������������Ȼ���������ջ������������⣺
//            ����һ���ַ���������С��1000������ֻ�����������źʹ�СдӢ����ĸ��
//            ���д�����ж�������ַ���������������Ƿ�ȫ����ƥ���
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
	T list[MAX + 1];
	int top;
public:
	Stack();
	void push(const T &item);//��itemѹջ
	T pop();//��ջ��Ԫ�ص���ջ
	const T & peek() const;//����ջ��Ԫ��
	bool isEmpty() const;//�ж��Ƿ�ջ��
	bool isFull() const;//�ж��Ƿ�ջ��
};
//�����ջģ�����ʵ�֣����������ƥ������
template<class T, int MAX>
Stack<T, MAX>::Stack() :top(0) {}

template<class T, int MAX>
void Stack<T, MAX>::push(const T &item)
{
	list[top++] = item;
}

template<class T, int MAX>
T Stack<T, MAX> ::pop()
{
	return list[--top];
}

template<class T, int MAX>
const T & Stack<T, MAX>::peek() const
{
	return list[top-1];
}

template<class T, int MAX>
bool Stack<T, MAX> ::isEmpty() const
{
	return top == 0;
}

template<class T, int MAX>
bool Stack<T, MAX> ::isFull() const
{
	return top == MAX;
}

int C_93()
{
	Stack<char> stack;
	string s;
	cin >> s;


	for (auto c: s)
	{
		if (c == '(' && !stack.isFull())
			stack.push(c);
		else if (c == ')')
		{
			if (stack.isEmpty())
			{
				cout << "No" << endl;
				return 0;
			}
			stack.pop();
		}
		else
			continue;
	}
	if (stack.isEmpty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	    
	return 0;
}