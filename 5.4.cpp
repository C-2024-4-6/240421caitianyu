#include<iostream>
using namespace std;
#define INT long long
class stud
{
public:
	INT num; int sco;
	stud(INT i,int g):num(i),sco(g){}
};
void max(stud* st[5])
{
	int max = 0;
	for (int j = 0; j < 5; j++)
	{
		if (st[j]->sco > st[max]->sco)
		{
			max = j;
		}
	}
	cout << "成绩最高的学生的学号为" << st[max]->num << endl;
}
int main()
{
	stud* st[5];
	cout << "请依次输入学生学号及成绩" << endl;
	INT num;int sco;
	for (int i = 0; i < 5; i++)
	{
		cin >> num >> sco;
		st[i] = new stud(num, sco);
	}
	max(st);
	for (int i = 0; i < 5; i++) {
		delete st[i];
	}
	return 0;
}