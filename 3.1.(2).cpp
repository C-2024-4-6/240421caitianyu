/*#include <iostream>
using namespace std;
void zxgy(int a, int b, int &c)
{
	while (b != 0)
	{
		c = b;
		b = a % b;
		a = c;
	}
}
int main()
{
	int a, b, c ;
	char w;
	cout << "����������������";
	cin >> a >> b;
	cout << "��ѡ������С��Լ����A������С��������B��";
	cin >> w;
	zxgy(a, b, c);
	switch (w)
	{
	case 'A':
		cout << c; break;
	case 'B':
		cout << a * b / c; break;
	default:
		cout << "������A��B"; break;
	}
	return 0;
}*/