#pragma once
#include<iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	Student(int a,string s,string d)
	{
		num = a; name = s; sex = d;
	}
private:
	int num;
	string name;
	string sex;
};
