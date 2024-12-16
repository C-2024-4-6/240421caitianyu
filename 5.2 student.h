#pragma once
#include<iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
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
