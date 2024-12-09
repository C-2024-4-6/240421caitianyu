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
	cout << "请输入两个正整数";
	cin >> a >> b;
	cout << "请选择求最小公约数（A）或最小公倍数（B）";
	cin >> w;
	zxgy(a, b, c);
	switch (w)
	{
	case 'A':
		cout << c; break;
	case 'B':
		cout << a * b / c; break;
	default:
		cout << "请输入A或B"; break;
	}
	return 0;
}*/