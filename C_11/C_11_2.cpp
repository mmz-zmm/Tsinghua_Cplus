// C_11_1.cpp : 实现一个学生类，包含学号（id），姓名（name），年级（grade）数据成员。
// 为了输入输出的方便，需要对这个学生类重载“>>”和“<<”运算符，同时为了对多个学生按照学号从小到大排序，
// 还需要重载“<”运算符，以使用STL里的sort函数。
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

/*请在这里填充代码*/
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