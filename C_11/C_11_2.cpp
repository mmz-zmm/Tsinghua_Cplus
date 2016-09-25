// C_11_1.cpp : ʵ��һ��ѧ���࣬����ѧ�ţ�id����������name�����꼶��grade�����ݳ�Ա��
// Ϊ����������ķ��㣬��Ҫ�����ѧ�������ء�>>���͡�<<���������ͬʱΪ�˶Զ��ѧ������ѧ�Ŵ�С��������
// ����Ҫ���ء�<�����������ʹ��STL���sort������
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
	int id;
	string name, grade;
	Student() {};
	Student(int id_t, string name_t, string grade_t);
	bool operator < (const Student & s) const;
};

istream & operator >> (istream & in, Student & s);
ostream & operator << (ostream & out, Student & s);

/*��������������*/
Student::Student(int id_t, string name_t, string grade_t) :id(id_t), name(name_t), grade(grade_t) {}

bool Student::operator < (const Student & s) const
{
	if (id < s.id)
		return true;
	return false;
}
istream & operator >> (istream & in, Student & s)
{
	in >> s.id >> s.name >> s.grade;
	return in;
}

ostream & operator << (ostream & out, Student & s)
{
	out << s.id <<' '<< s.name <<' '<< s.grade << endl;
	return out;
}



int C_11_2()
{
	vector<Student> sv;
	Student temp;
	while (cin >> temp)
	{
		sv.push_back(temp);
	}
	sort(sv.begin(), sv.end());
	for (int i = 0; i < sv.size(); ++i)
		cout << sv[i];
	return 0;
}