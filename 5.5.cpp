#include<iostream>
#define D double
using namespace std;
class point
{
private:
	D x; D y;
public:
	point(D x, D y)
	{
		this->x = x;
		this->y = y;
	}
	void plus(D i,D j)
	{
		x += i; y += j;
	}
	void display()
	{
		cout << "�µ������Ϊ" << '(' << x << ',' << y << ')' << endl;
	}
};
int main()
{
	D i, j;
	point A(60, 80);
	cout << "�������������ӵ�ֵ" << endl;
	cin >> i >> j;
	A.plus(i, j);
	A.display();
	return 0;
}