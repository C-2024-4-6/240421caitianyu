#include<iostream>
using namespace std;
int main()
{
	for(int peach = 1, day = 10;day>0;day--)
	{
		cout << "��" << day << "�������" << peach << "������" << endl;
		peach += 1;
		peach *= 2;
	}
	return 0;
}