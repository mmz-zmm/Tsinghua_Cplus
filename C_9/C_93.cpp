// C_93.cpp : 请先实现一个栈模板类（定义已在下面给出），然后利用这个栈类解决下面的问题：
//            给定一个字符串，长度小于1000，其中只包含左右括号和大小写英文字母。
//            请编写程序判断输入的字符串里的左右括号是否全部是匹配的
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
	void push(const T &item);//将item压栈
	T pop();//将栈顶元素弹出栈
	const T & peek() const;//访问栈顶元素
	bool isEmpty() const;//判断是否栈空
	bool isFull() const;//判断是否栈满
};
//请完成栈模板类的实现，并解决括号匹配问题
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